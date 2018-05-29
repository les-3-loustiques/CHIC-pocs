#include "g_gpio.h"

void gpio_init_TP(){
      // set pin EN_TP_POWER_PIN to 1
    nrf_gpio_cfg_output(EN_TP_POWER_PIN);
    nrf_gpio_pin_write(EN_TP_POWER_PIN, 1);

    // set pin RESET_TP_PIN to 1 
    nrf_gpio_cfg_output(RESET_TP_PIN);
    nrf_gpio_pin_write(RESET_TP_PIN, 1);

}