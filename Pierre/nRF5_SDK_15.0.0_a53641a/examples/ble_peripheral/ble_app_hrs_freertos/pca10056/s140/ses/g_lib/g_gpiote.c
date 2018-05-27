#include "g_gpiote.h"

void gpiote_init_TP(){
	// define config for interrupt channel for the touch panel's interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[0] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT_TOUCHPANEL_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT_TOUCHPANEL_PORT << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;
	
    // Activate the interrupt for IN[0]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN0_MASK);
    // Activate IRQ for GPIOTE
    NVIC_EnableIRQ(GPIOTE_IRQn);
}