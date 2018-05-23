#ifndef LM

#include "nrf_drv_spi.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#define LM_SPI0_INSTANCE  0 /**< SPI instance index. */
#define LM_SPI1_INSTANCE  1 /**< SPI instance index. */
static const nrf_drv_spi_t spi0 = NRF_DRV_SPI_INSTANCE(LM_SPI0_INSTANCE);  /**< SPI instance. */
static const nrf_drv_spi_t spi1 = NRF_DRV_SPI_INSTANCE(LM_SPI1_INSTANCE);  /**< SPI instance. */
static volatile bool spi0_xfer_done;  /**< Flag used to indicate that SPI instance completed the transfer. */
static volatile bool spi1_xfer_done;  /**< Flag used to indicate that SPI instance completed the transfer. */

#define TEST_STRING "0b11111000"
static uint8_t       m_tx_buf[] = TEST_STRING;           /**< TX buffer. */
static uint8_t       m_rx_buf[1];    /**< RX buffer. */
static uint8_t m_length;        /**< Transfer length. */

#define COLUMNS  40
#define COLUMNSBYSPI  20
#define ROWS 20
#define LEDNUMBER (COLUMNS*ROWS)
#define RESETOFFSET 40
#define MATRIXSIZEWITHOUTOFFSET (LEDNUMBER*15)
#define MAXLUMINOSITYSHIFTS 0
#define MATRIXSIZE (MATRIXSIZEWITHOUTOFFSET + RESETOFFSET)

#define LM_SPI0_SS_PIN 0xFFFFFFFF
#define LM_SPI0_MISO_PIN 25
#define LM_SPI0_MOSI_PIN 23
#define LM_SPI0_SCK_PIN 21

//look at sdk_config.h to enable other SPI: "NRFX_SPIM0_ENABLED" and "NRFX_SPI0_ENABLED"

// <0=> 0 (P0.0) 
// <1=> 1 (P0.1) 
// <2=> 2 (P0.2) 
// <3=> 3 (P0.3) 
// <4=> 4 (P0.4) 
// <5=> 5 (P0.5) 
// <6=> 6 (P0.6) 
// <7=> 7 (P0.7) 
// <8=> 8 (P0.8) 
// <9=> 9 (P0.9) 
// <10=> 10 (P0.10) 
// <11=> 11 (P0.11) 
// <12=> 12 (P0.12) 
// <13=> 13 (P0.13) 
// <14=> 14 (P0.14) 
// <15=> 15 (P0.15) 
// <16=> 16 (P0.16) 
// <17=> 17 (P0.17) 
// <18=> 18 (P0.18) 
// <19=> 19 (P0.19) 
// <20=> 20 (P0.20) 
// <21=> 21 (P0.21) 
// <22=> 22 (P0.22) 
// <23=> 23 (P0.23) 
// <24=> 24 (P0.24) 
// <25=> 25 (P0.25) 
// <26=> 26 (P0.26) 
// <27=> 27 (P0.27) 
// <28=> 28 (P0.28) 
// <29=> 29 (P0.29) 
// <30=> 30 (P0.30) 
// <31=> 31 (P0.31) 
// <32=> 32 (P1.0) 
// <33=> 33 (P1.1) 
// <34=> 34 (P1.2) 
// <35=> 35 (P1.3) 
// <36=> 36 (P1.4) 
// <37=> 37 (P1.5) 
// <38=> 38 (P1.6) 
// <39=> 39 (P1.7) 
// <40=> 40 (P1.8) 
// <41=> 41 (P1.9) 
// <42=> 42 (P1.10) 
// <43=> 43 (P1.11) 
// <44=> 44 (P1.12) 
// <45=> 45 (P1.13) 
// <46=> 46 (P1.14) 
// <47=> 47 (P1.15) 
// <0xFFFFFFFF=> Not connected 

bool lm_init(int spiChannel0, int spiChannel1);
void lm_spi0_event_handler(nrf_drv_spi_evt_t const * p_event,
                       void *                    p_context);
void lm_spi_send();

void lm_setSingleLedColor(int x, int y, int color);
void lm_setLedColor(int color);

void lm_ledColorBuilder(int c, uint8_t *led);
char lm_oneZeroTranslation(bool one);
int lm_colorBuilder(char r, char g, char b);

#endif