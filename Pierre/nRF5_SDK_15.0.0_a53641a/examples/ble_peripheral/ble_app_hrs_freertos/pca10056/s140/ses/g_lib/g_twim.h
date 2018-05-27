#ifndef _G_TWIM_H_
#define _G_TWIM_H_

#include "nrf_drv_twi.h"

/* TWI instance ID. */
#define TWI_INSTANCE_ID     0

static const nrf_drv_twi_t m_twi = NRF_DRV_TWI_INSTANCE(TWI_INSTANCE_ID); // initialize an instance of TWIM

void twi_init ();

#endif