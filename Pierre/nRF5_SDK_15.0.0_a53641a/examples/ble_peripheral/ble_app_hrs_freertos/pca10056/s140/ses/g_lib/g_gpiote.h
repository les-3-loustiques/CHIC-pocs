#ifndef _G_GPIOTE_H_
#define _G_GPIOTE_H_

#include "nrf_gpiote.h"
#include "g_lib_touch_panel.h"

#define INT_VOLUME_PLUS_PORT 1
#define INT_VOLUME_PLUS_PIN 5
#define INT_VOLUME_MOINS_PORT 1
#define INT_VOLUME_MOINS_PIN 6
#define INT_MENU_1_PORT 1
#define INT_MENU_1_PIN 15
#define INT_MENU_2_PORT 0
#define INT_MENU_2_PIN 12
#define INT_MENU_3_PORT 1
#define INT_MENU_3_PIN 7
/**
@brief Initialize the gpiote to catch an interrupt from touch panels on the config[0] and config[1]
*/
void gpiote_init_TP();

/**
@brief Handler for every GPIOTE interrupt 
*/
void GPIOTE_IRQHandler(void);

#endif