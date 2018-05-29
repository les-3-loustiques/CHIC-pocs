#ifndef _G_GPIO_H_
#define _G_GPIO_H_

#include "nrf_gpio.h"
#include "g_lib_touch_panel.h"

/**
@brief Set pins for reset and Enable power to 1 to activate touchscreen 
*/
void gpio_init_TP();

#endif