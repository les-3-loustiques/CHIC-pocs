#ifndef _LIB_TOUCH_PANEL_H_
#define _LIB_TOUCH_PANEL_H_

#include <stdint.h>
#include "nrf_drv_twi.h"
#include "g_gpiote.h"
#include "g_twim.h"
#include "g_gpio.h"
#include "string.h"

#define ADDRESS_TOUCHPANEL_I2C 0x38 /**< Actual address of touchscreen */
#define ADDRESS_MUX_TOUCHPANEL 0x70 /**< Actual address of I2C multiplexer. Address is 0b1110'0000*/
#define TOUCH_REGISTER_FINGER_1 0x03 /**< Address register in the controller of the first touch */
#define NUMBER_OF_TOUCHES_REGISTER 0x2 /**< Register storing the actual number of touches in the controller */
#define THRESHOLD_GROUP_REGISTER 0x80 /**< Register storing the threshold for ... */
#define THRESHOLD_PEAK_REGISTER 0x81 /**< Register storing the peak threshold detection*/
#define MAX_REGISTER_TOUCHES_SIZE 0x1C /**< Maximum size of buffer to contain 5 touches */

#define MUX_TOUCHPANEL_0 0x04 /**< Set register of Mux to channel 0 */
#define MUX_TOUCHPANEL_1 0x05 /**< Set register of Mux to channel 1 */

#define INT0_TOUCHPANEL_PORT 1 /**< Port of touch panel 0 interrupt (1.10) */
#define INT0_TOUCHPANEL_PIN 10 /**< Pin of touch panel  0 interrupt (1.10) */
#define INT1_TOUCHPANEL_PORT 1 /**< Port of touch panel 1 interrupt (1.11) */
#define INT1_TOUCHPANEL_PIN 11 /**< Pin of touch panel  1 interrupt (1.11) */

#define RESET_TP_PIN 45 /**< Pin for reset touch panel (1.13) */
#define EN_TP_POWER_PIN 47 /**< Pin for activate the DC-DC converter for touch panel */

#define EVENT_FLAG_POS 6 /**< Position of flag for touch panel event in gpiote */
#define TOUCH_X_H_OFFSET 0 /**< Offset for MSB of X axis */
#define TOUCH_X_H_MASK 0x0f /**< Mask to get MSB of X axis */
#define TOUCH_Y_H_MASK 0x0f /**< Mask to get MSB of Y axis */
#define TOUCH_X_L_OFFSET 1 /**< Offset for LSB of X axis */
#define TOUCH_Y_H_OFFSET 2 /**< Offset for MSB of Y axis */
#define TOUCH_Y_L_OFFSET 3 /**< Offset for LSB of Y axis */
#define TOUCH_ID_POS 4 /**< Position of touch ID */

#define TOUCHPANEL_WIDTH 1150 /**< Width resolution of touch panel */
#define TOUCHPANEL_HEIGHT 480 /**< Height resolution of touch panel */


typedef enum{
	PUTDOWN = 0,
	PUTUP = 1,
	CONTACT = 2,
	RESERVED = 3
} touchpoint_event; /**< Enumerating types of touches */

typedef  struct{
	touchpoint_event event;
	uint8_t touch_id;
	uint16_t pos_x;
	uint16_t pos_y;
} touchpoint_t; /**< Data of one touch point */


typedef  struct{
	uint8_t number_of_touchpoints;
	touchpoint_t touchpoint[5];
	
} touchpoints_t; /**< Number of touches detected and their data */                           

/**
@brief Get the raw data of touches from a panel

@param touchpoints Structure where data will be stored
@param m_twi Instance to communicate by I2C
@param touchpanel Panel from which we request data
@return ret_code_t Error code 
*/
ret_code_t touchpanel_get_values_of_touches(touchpoints_t* touchpoints, const nrf_drv_twi_t* m_twi,  uint8_t touchpanel);

/**
@brief Parse the raw data received from touch panel controller into a touchpoint_t structure

@param touchpoints Structure to store data
@param to_parse Pointer to data to parse

@return void
*/
void touchpanel_parse_touches(touchpoints_t* touchpoints, uint8_t* to_parse);

/**
@brief Get pressed buttons

@param tp_activated deifne with touchpanel send an interrupt : 0b1 for tp 0, 0b10 for tp 1, 0b11 for tp 0 and 1, etc 

@return uint8_t Position of buttons pressed
There is 8 buttons, each bit of the uint16_t represents a button pressed. For example, 
0b1000_0000 means that the left button has been pressed, 0b1100_0000 means that the two first button from the left have been pressed,
0b0000_1001 means that the right button and the fourth button from the right are activated

*/
uint16_t touchpanel_get_pressed_buttons(uint8_t tp_activated);

/**
@brief Project the coordinates of the two panels into the active area we want

@param touchpoints Contains the coordinates of the two touchpanels
@param touchpoints_active Contains the coordonites from (0,0) to (1152, 480), permits then to get the buttons

@return NRF_SUCCESS otherwise you can cry
*/
ret_code_t touchpanel_projection(touchpoints_t* touchpoints, touchpoints_t* touchpoints_active);

/**
@brief Set a value to the touch regsiter 

@param m_twi Instance to communicate via I2C
@param reg_address Address of register to write
@param data Data to write to the register

@return 0 id success otherwise you can cry
*/
ret_code_t touchpanel_send_cmd(const nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);

/**
@brief Configure the multiplexer and send data to touchanel.

@param m_twi Instance to communicate via I2C
@param touchpanel The touchpanel whom we want to communicate to configure on multiplexer
@param reg_address The register of touchpanel we want to write
@param data Data to write

@return NRF_SUCCESS otherwise you can cry
*/
ret_code_t touchpanel_send_twi(const nrf_drv_twi_t* m_twi, uint8_t touchpanel, uint8_t reg_address, uint8_t* data);

/**
@brief Send an I2C command to multiplexer

@param m_twi Instance to communicate via I2C
@param data Channel choosen

@return ret_code_t NRF_SUCCESS otherwise you can cry
*/
ret_code_t mux_touchpanel_send_cmd(const nrf_drv_twi_t* m_twi, uint8_t data);

/**
@brief Get the value of a specific register of touch panel

@param m_twi Instance to communicate via I2C
@param reg_address Address of register to read
@param data Pointer to store data received

@return 0 id success otherwise you can cry
*/
ret_code_t touchpanel_get_register_value(const nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data, uint8_t rx_data_size);

/**
@brief Configure the multiplexer and get data from touchanel.

@param m_twi Instance to communicate via I2C
@param touchpanel The touchpanel whom we want to communicate to configure on multiplexer
@param reg_address The register of touchpanel we want to write
@param data buffer where data will be stored
@param rx_data_size Size of data to collect
*/
ret_code_t touchpanel_get_twi(const nrf_drv_twi_t* m_twi, uint8_t touchpanel, uint8_t reg_address, uint8_t* data, uint8_t rx_data_size);

/**
@brief Initialize the Two wire interface instance, the interrupt, the reset and enable converter power  
*/
void touchpanel_init();

#endif