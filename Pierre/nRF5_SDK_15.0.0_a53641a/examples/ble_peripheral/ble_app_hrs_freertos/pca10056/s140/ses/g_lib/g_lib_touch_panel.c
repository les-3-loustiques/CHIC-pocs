#include "g_lib_touch_panel.h"

/*************************************************************************************************************************/
void touchpanel_init() {
  twi_init();       // init the two wire interface for touch panel
  gpiote_init_TP(); // init Config[0] and Config[1] of gpiote for touch panel
  gpio_init_TP();   // set reset for touchpanel

  // Change sensibilty of sensors
  uint8_t threshold_peak = 3;  // default value : 60
  uint8_t threshold_group = 3; // default value : 20
  touchpanel_send_twi(&m_twi, MUX_TOUCHPANEL_0, THRESHOLD_PEAK_REGISTER, &threshold_peak);
  touchpanel_send_twi(&m_twi, MUX_TOUCHPANEL_0, THRESHOLD_GROUP_REGISTER, &threshold_group);
  touchpanel_send_twi(&m_twi, MUX_TOUCHPANEL_1, THRESHOLD_PEAK_REGISTER, &threshold_peak);
  touchpanel_send_twi(&m_twi, MUX_TOUCHPANEL_1, THRESHOLD_GROUP_REGISTER, &threshold_group);
}

/**< Global variable storing touch points from two panels*/
touchpoints_t touchpoints[2] = {{0,
                                {{PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0}}},
                                {0,
                                {{PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0},
                                {PUTDOWN, 0, 0, 0}}}};
/**< Global variable storing projection of two touchpanels into one active area (the touchscreen simulated).*/
touchpoints_t touchpoints_active = {0,
                              {{PUTDOWN, 0, 0, 0},
                              {PUTDOWN, 0, 0, 0},
                              {PUTDOWN, 0, 0, 0},
                              {PUTDOWN, 0, 0, 0},
                              {PUTDOWN, 0, 0, 0}}};

/*************************************************************************************************************************/
ret_code_t touchpanel_get_values_of_touches(touchpoints_t *touchpoints, const nrf_drv_twi_t *m_twi, uint8_t touchpanel) {

  uint8_t rx_buffer_number_of_touches = 0;
  uint8_t rx_buffer[MAX_REGISTER_TOUCHES_SIZE];
  uint8_t rx_data_size = 1;

  // we want data from register 2 to know number of touches
  touchpanel_get_twi(m_twi, touchpanel, NUMBER_OF_TOUCHES_REGISTER, &rx_buffer_number_of_touches, rx_data_size);

  touchpoints->number_of_touchpoints = rx_buffer_number_of_touches;

  if (touchpoints->number_of_touchpoints > 0) {

    // the size of data to receive is (number_of_touchpoints*4) + (number_of_touchpoints-1)*2
    rx_data_size = (6 * (touchpoints->number_of_touchpoints)) - 2;
    touchpanel_get_twi(m_twi, touchpanel, TOUCH_REGISTER_FINGER_1, rx_buffer, rx_data_size);

    // Parsing raw data into structure
    touchpanel_parse_touches(touchpoints, rx_buffer);
  }
  return NRF_SUCCESS;
}

/*************************************************************************************************************************/
/*
data of a touch is stored like this :
|  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
|                       |         MSB X0        |
|                    LSB X0                     |
|                       |         MSB Y0        |
|                    LSB Y0                     |
|                      empty                    |
|                      empty                    |
|                       |         MSB X1        |
|                    LSB X1                     |
|                       |         MSB Y1        |
|                    LSB Y1                     |
*/
void touchpanel_parse_touches(touchpoints_t *touchpoints, uint8_t *to_parse) {
  uint8_t offset = 0;
  for (int i = 0; i < touchpoints->number_of_touchpoints; i++) {
    offset = i * 6;
    touchpoints->touchpoint[i].event = to_parse[offset] >> EVENT_FLAG_POS;
    touchpoints->touchpoint[i].touch_id = to_parse[offset + TOUCH_Y_H_OFFSET] >> TOUCH_ID_POS;
    touchpoints->touchpoint[i].pos_x = ((to_parse[offset + TOUCH_X_H_OFFSET] & TOUCH_X_H_MASK) << 8) | to_parse[offset + TOUCH_X_L_OFFSET];
    touchpoints->touchpoint[i].pos_y = ((to_parse[offset + TOUCH_Y_H_OFFSET] & TOUCH_Y_H_MASK) << 8) | to_parse[offset + TOUCH_Y_L_OFFSET];
  }
}
#define BUTTON_HEIGHT_TOUCHPANEL 100
#define BUTTON_WIDTH_TOUCHPANEL (TOUCHPANEL_WIDTH >> 3)
#define BUTTON_BOTTOM_LOCATION 470
#define BUTTON_TOP_LOCATION (BUTTON_BOTTOM_LOCATION - BUTTON_HEIGHT_TOUCHPANEL)
/*************************************************************************************************************************/
uint16_t touchpanel_get_pressed_buttons(uint8_t tp_activated) {
  // we can check to 8 touchpanels
  for (int i = 0; i < sizeof(tp_activated); i++) {
    if ((tp_activated >> i) & 1)
      touchpanel_get_values_of_touches(&touchpoints[i], &m_twi, i);
  }

  // project the two touchpanels into one simulation of a touchpanel of size (1152,480)
  touchpanel_projection(touchpoints, &touchpoints_active);

  uint16_t buttons_pressed = 0;

  // to remake with the good sizes //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  for (int i = 0; i < touchpoints_active.number_of_touchpoints; i++) {
    // Buttons are only on the bottom side of silicone
    if((touchpoints_active.touchpoint[i].pos_y < BUTTON_BOTTOM_LOCATION) && (touchpoints_active.touchpoint[i].pos_y > BUTTON_TOP_LOCATION)){
      // Divide the screen in 8 equal parts and each part is a button
      buttons_pressed |= 1 << (touchpoints_active.touchpoint[i].pos_x / (TOUCHPANEL_WIDTH >> 3));
    }
  }
  return buttons_pressed;
}

/*************************************************************************************************************************/
ret_code_t touchpanel_send_cmd(const nrf_drv_twi_t *m_twi, uint8_t reg_address, uint8_t *data) {
  // copy of address and data into one variable
  uint8_t tx_buffer[sizeof(data) + 1];
  memcpy(tx_buffer, &reg_address, 1);
  memcpy(&(tx_buffer[1]), data, sizeof(data));
  if (nrf_drv_twi_tx(m_twi, ADDRESS_TOUCHPANEL_I2C, tx_buffer, 2, false) != NRF_SUCCESS) {
    printf("Can't send command ! \n");
    return -1;
  }
  return NRF_SUCCESS;
}

/*************************************************************************************************************************/
ret_code_t touchpanel_projection(touchpoints_t* touchpoints,touchpoints_t* touchpoints_active){
  
  // Get the total of touchpoints, max 10 (5 by panel)
  touchpoints_active->number_of_touchpoints = touchpoints[0].number_of_touchpoints + touchpoints[1].number_of_touchpoints;

  // Do the convertion for touchpanel 0
  for (int i = 0; i < touchpoints[0].number_of_touchpoints; i++) {
    touchpoints_active->touchpoint[i].event = touchpoints[0].touchpoint[i].event;
    touchpoints_active->touchpoint[i].touch_id = touchpoints[0].touchpoint[i].touch_id;
    touchpoints_active->touchpoint[i].pos_x = touchpoints[0].touchpoint[i].pos_x;
    touchpoints_active->touchpoint[i].pos_y = touchpoints[0].touchpoint[i].pos_y;
  }

  // Do the convertion for touchpanel 1
  for (int i = touchpoints[0].number_of_touchpoints; i < touchpoints[0].number_of_touchpoints + touchpoints[1].number_of_touchpoints; i++) {
    touchpoints_active->touchpoint[i].event = touchpoints[1].touchpoint[i].event;
    touchpoints_active->touchpoint[i].touch_id = touchpoints[1].touchpoint[i].touch_id;
    touchpoints_active->touchpoint[i].pos_x = touchpoints[1].touchpoint[i].pos_x;
    touchpoints_active->touchpoint[i].pos_y = touchpoints[1].touchpoint[i].pos_y;
  }
}

/*************************************************************************************************************************/
ret_code_t mux_touchpanel_send_cmd(const nrf_drv_twi_t *m_twi, uint8_t data) {
  // set channel to mux
  // 0x04 is to enable channels
  data |= 0x04;
  if (nrf_drv_twi_tx(m_twi, ADDRESS_MUX_TOUCHPANEL, &data, 1, false) != NRF_SUCCESS) {
    printf("Can't send command ! \n");
    return -1;
  }
  return NRF_SUCCESS;
}

/*************************************************************************************************************************/
ret_code_t touchpanel_send_twi(const nrf_drv_twi_t *m_twi, uint8_t touchpanel, uint8_t reg_address, uint8_t *data) {
  // set channel of mux
  mux_touchpanel_send_cmd(m_twi, touchpanel);
  // start communication
  touchpanel_send_cmd(m_twi, reg_address, data);
}

/*************************************************************************************************************************/
ret_code_t touchpanel_get_register_value(const nrf_drv_twi_t *m_twi, uint8_t reg_address, uint8_t *data, uint8_t rx_data_size) {
  // set the register to read
  if (nrf_drv_twi_tx(m_twi, ADDRESS_TOUCHPANEL_I2C, &reg_address, 1, false) != NRF_SUCCESS) {
    printf("Can't set register to read\n");
    return -1;
  }
  //receive data
  if (nrf_drv_twi_rx(m_twi, ADDRESS_TOUCHPANEL_I2C, data, rx_data_size) != NRF_SUCCESS) {
    printf("Can't receive register value\n");
    return -1;
  }
  return NRF_SUCCESS;
}

/*************************************************************************************************************************/
ret_code_t touchpanel_get_twi(const nrf_drv_twi_t *m_twi, uint8_t touchpanel, uint8_t reg_address, uint8_t *data, uint8_t rx_data_size) {
  // set channel of mux
  mux_touchpanel_send_cmd(m_twi, touchpanel);
  // start communication
  touchpanel_get_register_value(m_twi, reg_address, data, rx_data_size);
}