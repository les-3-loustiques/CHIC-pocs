#include "g_twim.h"


void twi_init ()
{
    ret_code_t err_code;

    const nrf_drv_twi_config_t twi_config = {
       .scl                = 6,
       .sda                = 5,
       .frequency          = NRF_DRV_TWI_FREQ_400K,
       .interrupt_priority = APP_IRQ_PRIORITY_HIGH,
       .clear_bus_init     = false
    };

    err_code = nrf_drv_twi_init(&m_twi, &twi_config, NULL, NULL);
    APP_ERROR_CHECK(err_code);

    nrf_drv_twi_enable(&m_twi);
}