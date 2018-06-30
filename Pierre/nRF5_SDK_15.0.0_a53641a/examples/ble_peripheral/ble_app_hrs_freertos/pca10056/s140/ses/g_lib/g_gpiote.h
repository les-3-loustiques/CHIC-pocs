#ifndef _G_GPIOTE_H_
#define _G_GPIOTE_H_

#include "nrf_gpiote.h"
#include "g_lib_touch_panel.h"

/**
@brief Initialize the gpiote to catch an interrupt from touch panels on the config[0] and config[1]
*/
void gpiote_init_TP();

/**
@brief Handler for every GPIOTE interrupt 
*/
void GPIOTE_IRQHandler(void);

#endif