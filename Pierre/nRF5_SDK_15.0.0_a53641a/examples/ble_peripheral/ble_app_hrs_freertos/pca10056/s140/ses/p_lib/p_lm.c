#include "p_lm.h"

bool lm_init(int spiChannel0, int spiChannel1) {
  nrf_drv_spi_config_t spi_config0 = NRF_DRV_SPI_DEFAULT_CONFIG;
  spi_config0.ss_pin = LM_SPI0_SS_PIN;
  spi_config0.miso_pin = LM_SPI0_MISO_PIN;
  spi_config0.mosi_pin = LM_SPI0_MOSI_PIN;
  spi_config0.sck_pin = LM_SPI0_SCK_PIN;
  APP_ERROR_CHECK(nrf_drv_spi_init(&spi0, &spi_config0, lm_spi0_event_handler, NULL));
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

  APP_ERROR_CHECK(nrf_drv_spi_transfer(&spi0, m_tx_buf, m_length, m_rx_buf, m_length));
  while (!spi0_xfer_done) {
    __WFE();
  }
}