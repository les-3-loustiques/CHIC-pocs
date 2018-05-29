#ifndef _LIB_TOUCH_PANEL_H_
#define _LIB_TOUCH_PANEL_H_

#include <stdint.h>
#include "nrf_drv_twi.h"
#include "g_gpiote.h"
#include "g_twim.h"
#include "g_gpio.h"
#include "string.h"

#define ADDRESS_TOUCHPANEL_I2C 0x38 /**< Actual address of touchscreen */
#define ADDRESS_REGISTER_TOUCH_1 0x03 /**< Address register in the controller of the first touch */
#define NUMBER_OF_TOUCHES_REGISTER 0x2 /**< Register storing the actual number of touches in the controller */
#define TOUCHES_SIZE 0x1B /**< Sizes of buffer to store data for one touch */

#define INT_TOUCHPANEL_PORT 1 /**< Port of touch panel interrupt (1.10) */
#define INT_TOUCHPANEL_PIN 10 /**< Pin of touch panel interrupt (1.10) */
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

#define TOUCHPANEL_WIDTH 800 /**< Width resolution of touch panel */
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
@brief Get the raw data of touches 

@param touchpoints Structure where data will be stored
@param m_twi Instance to communicate by I2C

@return void
*/
ret_code_t touchpanel_get_values_of_touches(touchpoints_t* touchpoints, nrf_drv_twi_t* m_twi);

/**
@brief Parse the raw data received from touch panel controller into a touchpoint_t structure

@param touchpoints Structure to store data
@param to_parse Pointer to data to parse

@return void
*/
void touchpanel_parse_touches(touchpoints_t* touchpoints, uint8_t* to_parse);

/**
@brief Get pressed buttons

There is 8 buttons and a maximum of 5 touches, each bit of the uint8_t represents a button pressed. For example, 
0b1000_0000 means that the left button has been pressed, 0b1100_0000 means that the two first button from the left have been pressed,
0b0000_1001 means that the right button and the fourth button from the right are activated

@return uint8_t Position of buttons pressed
*/
uint8_t touchpanel_get_pressed_buttons();

/**
@brief Set a value to the touch regsiter 

@param m_twi Instance to communicate via I2C
@param reg_address Address of register to write
@param data Data to write to the register

@return 0 id success otherwise you can cry
*/
ret_code_t touchpanel_send_cmd(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);

/**
@brief Get the value of a specific register of touch panel

@param m_twi Instance to communicate via I2C
@param reg_address Address of register to read
@param data Pointer to store data received

@return 0 id success otherwise you can cry
*/
ret_code_t touchpanel_get_register_value(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);

/**
@brief Initialize the Two wire interface instance, the interrupt, the reset and enable converter power  
*/
void touchpanel_init();

#endif