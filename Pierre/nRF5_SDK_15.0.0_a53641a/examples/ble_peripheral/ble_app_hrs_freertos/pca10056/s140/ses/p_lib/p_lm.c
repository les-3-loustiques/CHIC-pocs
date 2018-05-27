#include "p_lm.h"

static uint8_t m[MATRIXSIZE];
//least significant bits for g
//most significant bits for b

bool lm_init(int spiChannel0, int spiChannel1) {
  nrf_drv_spi_config_t spi_config0 = NRF_DRV_SPI_DEFAULT_CONFIG;
  spi_config0.ss_pin = LM_SPI0_SS_PIN;
  spi_config0.miso_pin = LM_SPI0_MISO_PIN;
  spi_config0.mosi_pin = LM_SPI0_MOSI_PIN;
  spi_config0.sck_pin = LM_SPI0_SCK_PIN;
  spi_config0.mode = NRF_DRV_SPI_MODE_2;
  spi_config0.frequency = NRF_SPI_FREQ_4M;
  spi_config0.bit_order = NRF_DRV_SPI_BIT_ORDER_MSB_FIRST;
  APP_ERROR_CHECK(nrf_drv_spi_init(&spi0, &spi_config0, lm_spi0_event_handler, NULL));
  lm_setLedColor(lm_colorBuilder(0, 0, 0));
  for (int i = 0; i < RESETOFFSET; i++) {
    m[i] = 0; //reset bytes to be sent before each frame
  }
  lm_spi_send();
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
    //NRF_LOG_HEXDUMP_INFO(m_rx_buf, strlen((const char *)m_rx_buf));
  }
}

void lm_spi_send() {
  //memset(m_rx_buf, 0, m_length);
  spi0_xfer_done = false;

  APP_ERROR_CHECK(nrf_drv_spi_transfer(&spi0, m, MATRIXSIZE, m_rx_buf, 1));
  while (!spi0_xfer_done) {
  __WFE();
  }
}

void lm_setSingleLedColor(int x, int y, int color) {
  lm_ledColorBuilder(color, &(m[(x * ROWS + y) * 15 + RESETOFFSET]));
}

void lm_setLedColor(int color) {
  for (int i = 0; i < COLUMNS; i++) {
    for (int j = 0; j < ROWS; j++) {
      lm_ledColorBuilder(color, &(m[(i * ROWS + j) * 15 + RESETOFFSET]));
    }
  }
}

void lm_ledColorBuilder(int c, uint8_t led[15]) {
  for (int i = 0; i < 3; i++) {
    led[0 + 5 * i] = (0b10000 | lm_oneZeroTranslation(c & (1 << (7 + 8 * i)))) << 3 | (0b10000 | lm_oneZeroTranslation(c & (1 << (6 + 8 * i)))) >> 2;
    led[1 + 5 * i] = (0b10000 | lm_oneZeroTranslation(c & (1 << (6 + 8 * i)))) << 6 | (0b10000 | lm_oneZeroTranslation(c & (1 << (5 + 8 * i)))) << 1 | (0b10000 | lm_oneZeroTranslation(c & (1 << (4 + 8 * i)))) >> 4;
    led[2 + 5 * i] = (0b10000 | lm_oneZeroTranslation(c & (1 << (4 + 8 * i)))) << 4 | (0b10000 | lm_oneZeroTranslation(c & (1 << (3 + 8 * i)))) >> 1;
    led[3 + 5 * i] = (0b10000 | lm_oneZeroTranslation(c & (1 << (3 + 8 * i)))) << 7 | (0b10000 | lm_oneZeroTranslation(c & (1 << (2 + 8 * i)))) << 2 | (0b10000 | lm_oneZeroTranslation(c & (1 << (1 + 8 * i)))) >> 3;
    led[4 + 5 * i] = (0b10000 | lm_oneZeroTranslation(c & (1 << (1 + 8 * i)))) << 5 | (0b10000 | lm_oneZeroTranslation(c & (1 << (0 + 8 * i))));
  }
}

char lm_oneZeroTranslation(bool one) {
  if (one) {
    return 0b1110;
  } else {
    return 0;
  }
}

int lm_colorBuilder(char r, char g, char b) {
  int retVal = ((r << 8 - MAXLUMINOSITYSHIFTS) & 0b11111111 << 8) | ((b >> MAXLUMINOSITYSHIFTS) & 0b11111111) | ((g << 16 - MAXLUMINOSITYSHIFTS) & 0b11111111 << 16);
}

void lm_waitForDataSent() {
  while (!spi0_xfer_done) {
    __WFE();
  }
}