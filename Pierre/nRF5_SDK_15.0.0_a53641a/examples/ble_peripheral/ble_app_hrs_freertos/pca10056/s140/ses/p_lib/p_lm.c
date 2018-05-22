#include "p_lm.h"

static matrix m;

bool lm_init(int spiChannel0, int spiChannel1) {
  nrf_drv_spi_config_t spi_config0 = NRF_DRV_SPI_DEFAULT_CONFIG;
  spi_config0.ss_pin = LM_SPI0_SS_PIN;
  spi_config0.miso_pin = LM_SPI0_MISO_PIN;
  spi_config0.mosi_pin = LM_SPI0_MOSI_PIN;
  spi_config0.sck_pin  = LM_SPI0_SCK_PIN;
  spi_config0.mode     = NRF_DRV_SPI_MODE_2;
  spi_config0.frequency= NRF_SPI_FREQ_4M;
  APP_ERROR_CHECK(nrf_drv_spi_init(&spi0, &spi_config0, lm_spi0_event_handler, NULL));
  lm_setLedColor(lm_colorBuilder(0,0,0));
  m_length = sizeof(m_tx_buf);        /**< Transfer length. */
}

/**
 * @brief SPI user event handler.
 * @param event
 */
void lm_spi0_event_handler(nrf_drv_spi_evt_t const *p_event,
    void *p_context) {
  spi0_xfer_done = true;
  NRF_LOG_INFO("Transfer completed.");
  if (m_rx_buf[0] != 0) {
    NRF_LOG_INFO(" Received:");
    NRF_LOG_HEXDUMP_INFO(m_rx_buf, strlen((const char *)m_rx_buf));
  }
  int i;
}

void lm_spi_send() {
  memset(m_rx_buf, 0, m_length);
  spi0_xfer_done = false;

  APP_ERROR_CHECK(nrf_drv_spi_transfer(&spi0, (uint8_t)m, m_length, m_rx_buf, m_length));
  while (!spi0_xfer_done) {
    __WFE();
  }
}

void lm_setSingleLedColor(int x, int y, int color){
  lm_ledColorBuilder(color, m[x*LINES+y]);
}

void lm_setLedColor(int color){
  for (int i = 0; i < COLUMNS; i++){
    for (int j = 0; j < LINES; j++){
      lm_ledColorBuilder(color, &(m[i*LINES+j]));
    }
  }
}

void lm_ledColorBuilder(int c, led *led){
  for (int i = 0; i < 3; i ++){
    led[0+i*5] = (0b10000 | lm_oneZeroTranslation(c & (1 << (7 + 8 * i)))) << 3 | (0b10000 | lm_oneZeroTranslation(c & (1 << (6 + 8 * i)))) >> 2;
    led[1+i*5] = (0b10000 | lm_oneZeroTranslation(c & (1 << (6 + 8 * i)))) << 6 | (0b10000 | lm_oneZeroTranslation(c & (1 << (5 + 8 * i)))) << 1 | (0b10000 | lm_oneZeroTranslation(c & (1 << (4 + 8 * i)))) >> 4;
    led[2+i*5] = (0b10000 | lm_oneZeroTranslation(c & (1 << (4 + 8 * i)))) << 4 | (0b10000 | lm_oneZeroTranslation(c & (1 << (3 + 8 * i)))) >> 1;
    led[3+i*5] = (0b10000 | lm_oneZeroTranslation(c & (1 << (3 + 8 * i)))) << 7 | (0b10000 | lm_oneZeroTranslation(c & (1 << (2 + 8 * i)))) << 8 | (0b10000 | lm_oneZeroTranslation(c & (1 << (1 + 8 * i)))) >> 3;
    led[4+i*5] = (0b10000 | lm_oneZeroTranslation(c & (1 << (1 + 8 * i)))) << 5 | (0b10000 | lm_oneZeroTranslation(c & (1 << (0 + 8 * i))));
  }
}

char lm_oneZeroTranslation(bool one){
  if (one){
    return 0b111;
  } else {
    return 0;
  }
}

int lm_colorBuilder(char r, char g, char b){
  int retVal = ((r << 8 - MAXLUMINOSITYSHIFTS) | 0b11111111 << 8) | ((g >> MAXLUMINOSITYSHIFTS) | 0b11111111) | ((b << 16 - MAXLUMINOSITYSHIFTS) | 0b11111111 << 16);
}