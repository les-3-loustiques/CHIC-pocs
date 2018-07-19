#include "g_gpiote.h"

void gpiote_init_TP(){

      // define config for interrupt channel for the touch panel 0 interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
      NRF_GPIOTE->CONFIG[0] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                          INT0_TOUCHPANEL_PIN << GPIOTE_CONFIG_PSEL_Pos |
                          INT0_TOUCHPANEL_PORT << GPIOTE_CONFIG_PORT_Pos |
                          GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                          GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the touch panel 1 interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[1] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT1_TOUCHPANEL_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT1_TOUCHPANEL_PORT << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the volume - interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
       NRF_GPIOTE->CONFIG[2] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                          INT_VOLUME_MOINS_PIN << GPIOTE_CONFIG_PSEL_Pos |
                          INT_VOLUME_MOINS_PORT << GPIOTE_CONFIG_PORT_Pos |
                          GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                          GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the volume + interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[3] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT_VOLUME_PLUS_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT_VOLUME_PLUS_PIN << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the volume + interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[4] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT_MENU_1_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT_MENU_1_PORT << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the volume + interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[5] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT_MENU_2_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT_MENU_2_PORT << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;

    // define config for interrupt channel for the volume + interrupt with mode event, port, pin, polarity and outinit (no effect on event mode)
	NRF_GPIOTE->CONFIG[6] = GPIOTE_CONFIG_MODE_Event << GPIOTE_CONFIG_MODE_Pos |
                            INT_MENU_3_PIN << GPIOTE_CONFIG_PSEL_Pos |
                            INT_MENU_3_PORT << GPIOTE_CONFIG_PORT_Pos |
                            GPIOTE_CONFIG_POLARITY_HiToLo << GPIOTE_CONFIG_POLARITY_Pos |
                            GPIOTE_CONFIG_OUTINIT_Low << GPIOTE_CONFIG_OUTINIT_Pos;


    // Activate the interrupt for IN[0]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN0_MASK);
    // Activate the interrupt for IN[1]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN1_MASK);
    // Activate the interrupt for IN[2]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN2_MASK);
    // Activate the interrupt for IN[3]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN3_MASK);
    // Activate the interrupt for IN[4]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN4_MASK);
    // Activate the interrupt for IN[5]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN5_MASK);
    // Activate the interrupt for IN[6]
    nrf_gpiote_int_enable(NRF_GPIOTE_INT_IN6_MASK);

    // Activate IRQ for GPIOTE
    NVIC_EnableIRQ(GPIOTE_IRQn);
}