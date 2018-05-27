#ifndef _LIB_TOUCH_PANEL_H_
#define _LIB_TOUCH_PANEL_H_

#include <stdint.h>
#include "nrf_drv_twi.h"
#include "g_gpiote.h"
#include "g_twim.h"
#include "g_gpio.h"
#include "string.h"

#define ADDRESS_TOUCHPANEL_I2C 0x38
#define ADDRESS_REGISTER_TOUCH_1 0x03
#define TOUCHES_SIZE 0x1B

#define INT_TOUCHPANEL_PORT 1
#define INT_TOUCHPANEL_PIN 10
#define RESET_TP_PIN 45
#define EN_TP_POWER_PIN 47

#define EVENT_FLAG_POS 6
#define TOUCH_X_H_OFFSET 0
#define TOUCH_X_H_MASK 0x0f
#define TOUCH_Y_H_MASK 0x0f
#define TOUCH_X_L_OFFSET 1
#define TOUCH_Y_H_OFFSET 2
#define TOUCH_Y_L_OFFSET 3
#define TOUCH_ID_POS 4

#define TOUCHPANEL_WIDTH 800
#define TOUCHPANEL_HEIGHT 480


typedef enum{
	PUTDOWN = 0,
	PUTUP = 1,
	CONTACT = 2,
	RESERVED = 3
} touchpoint_event;

typedef  struct{
	touchpoint_event event;
	uint8_t touch_id;
	uint16_t pos_x;
	uint16_t pos_y;
} touchpoint_t; 


typedef  struct{
	uint8_t number_of_touchpoints;
	touchpoint_t touchpoint[5];
	
} touchpoints_t;                                

ret_code_t touchpanel_get_values_of_touches(touchpoints_t* touchpoints, nrf_drv_twi_t* m_twi);
void touchpanel_parse_touches(touchpoints_t* touchpoints, uint8_t* to_parse);
uint8_t touchpanel_get_pressed_buttons();
ret_code_t touchpanel_send_cmd(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);
ret_code_t touchpanel_get_register_value(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);
void touchpanel_init();

#endif