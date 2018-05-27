#ifndef _G_GPIOTE_H_
#define _G_GPIOTE_H_

#include "nrf_gpiote.h"
#include "g_lib_touch_panel.h"

void gpiote_init_TP();
void GPIOTE_IRQHandler(void);

#endif