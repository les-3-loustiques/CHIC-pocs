#include "p_lm.h"

static uint8_t m[MATRIXSIZE];
TaskHandle_t *xDisplayManagerHandleSPI = NULL;
//least significant bits for g
//most significant bits for b

bool lm_init(int spiChannel0, int spiChannel1, TaskHandle_t *handle) {
  nrf_drv_spi_config_t spi_config0 = NRF_DRV_SPI_DEFAULT_CONFIG;
  spi_config0.ss_pin = LM_SPI0_SS_PIN;
  spi_config0.miso_pin = LM_SPI0_MISO_PIN;
  spi_config0.mosi_pin = LM_SPI0_MOSI_PIN;
  spi_config0.sck_pin = LM_SPI0_SCK_PIN;
  spi_config0.mode = NRF_DRV_SPI_MODE_2;
  spi_config0.frequency = NRF_SPI_FREQ_4M;
  spi_config0.bit_order = NRF_DRV_SPI_BIT_ORDER_MSB_FIRST;
  APP_ERROR_CHECK(nrf_drv_spi_init(&spi0, &spi_config0, lm_spi0_event_handler, NULL));
  lm_setLedsColor(lm_colorBuilder(0, 0, 0));
  for (int i = 0; i < RESETOFFSET; i++) {
    m[i] = 0; //reset bytes to be sent before each frame
  }
  xDisplayManagerHandleSPI = handle;
}
/**
 * @brief SPI user event handler.
 * @param event
 */
void lm_spi0_event_handler(nrf_drv_spi_evt_t const *p_event,
    void *p_context) {
  //xTaskGetHandle("DisplayManager")
  //  xTaskNotifyFromISR(*xDisplayManagerHandleSPI, 0x2, eSetBits, pdFALSE);
}

void lm_spi_send() {
  //nrf_drv_spi_transfer(&spi0, m, MATRIXSIZE, m_rx_buf, 1);
 while(nrf_drv_spi_transfer(&spi0, m, MATRIXSIZE, m_rx_buf, 1) == NRF_ERROR_BUSY);
 //APP_ERROR_CHECK(nrf_drv_spi_transfer(&spi0, m, MATRIXSIZE, m_rx_buf, 1));
}

void lm_setSingleLedColor(int x, int y, int color) {
  lm_ledColorBuilder(color, &(m[(x * ROWS + y) * 15 + RESETOFFSET]));
}

/*
void lm_setSingleLedColor(int x, int y, int color) {
  lm_ledColorBuilder(color, &(m[(x * ROWS + y) * 15 + RESETOFFSET]));
}*/


void lm_setLedsColor(int color) {
  for (int j = 0; j < MATRIXSIZE; j++) {
    lm_ledColorBuilder(color, &(m[j * 15 + RESETOFFSET]));
  }
}

/*
void lm_setLedsColor(int color) {
  for (int i = 0; i < COLUMNS; i++) {
    for (int j = 0; j < ROWS; j++) {
      lm_ledColorBuilder(color, &(m[(i * ROWS + j) * 15 + RESETOFFSET]));
    }
  }
}
*/

int lm_getPosFromCoordinatesPartition(int x, int y){
  if(x > COLUMNS || x < 0 || y > ROWS || y < 0) return POSITIION_ERROR;

  if(y < 9) return y*COLUMNS + x;
  else if (y == 9){
    if ( x > 0 && x < COLUMNS-1) return y*COLUMNS + (x-1);
    else return POSITIION_ERROR;
  }else if (y == 10){
    if ( x > 0 && x < COLUMNS-1) return y*COLUMNS + (x-3);
    else return POSITIION_ERROR;
  }else{
    if ( x > 2 && x < COLUMNS-3) return y*COLUMNS + (x-7);
    else return POSITIION_ERROR;
  }
}

int lm_getPosFromCoordinatesButton(int x, int y){
  if(x > COLUMNS_BUTTONS || x < 0 || y > ROWS_BUTTONS || y < 0) return POSITIION_ERROR;
  if(y % 2 == 1) x = COLUMNS_BUTTONS - 1 - x ;

  if(y < 7) return y * COLUMNS_BUTTONS + x;
  else if (y == 7){
    if(x < 5) return y * COLUMNS_BUTTONS + x;
    else return POSITIION_ERROR;
  }else{
    if(x < 4) return y * COLUMNS_BUTTONS + (x-1);
    else return POSITIION_ERROR;
  }
}

void lm_setPartitionColor(int color){
  for (int j = OFFSET_PARTITION; j < MATRIXSIZE; j++) {
      lm_ledColorBuilder(color, &(m[j * 15 + RESETOFFSET]));
  }
}

void lm_setButtonsColor(int button, int color){
  for (int j = 0; j < LEDS_PER_BUTTONS; j++) {
      lm_ledColorBuilder(color, &(m[(LEDS_PER_BUTTONS*(button-1) + j) * 15 + RESETOFFSET]));
  }
}

void lm_setSingleLedColorOfPartition(int x, int y, int color){
  int pos = lm_getPosFromCoordinatesPartition(x,y);
  if(pos != -1) lm_ledColorBuilder(color, &(m[(pos + OFFSET_PARTITION) * 15 + RESETOFFSET]));
}

void lm_setSingleLedColorOfButton(int x, int y, int button, int color){
  int pos = lm_getPosFromCoordinatesButton(x,y);
  if(pos != -1) lm_ledColorBuilder(color, &(m[(pos + ((button-1) * LEDS_PER_BUTTONS) ) * 15 + RESETOFFSET]));
}

void lm_setVerticalLineOfPartition(int column, int color){
  for(int j = 0; j < ROWS; j++){
    lm_setSingleLedColorOfPartition(column, j, color);
  }
}

void lm_setHorizontalLineOfPartition(int row, int color){
  for(int j = 0; j < COLUMNS; j++){
    lm_setSingleLedColorOfPartition(j,row,color);
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
  int retVal = ((r << 8 - MAXLUMINOSITYSHIFTS) & 0b11111111 << 8) | ((g >> MAXLUMINOSITYSHIFTS) & 0b11111111) | ((b << 16 - MAXLUMINOSITYSHIFTS) & 0b11111111 << 16);
}

void lm_waitForDataSent() {
  while (!spi0_xfer_done) {
    __WFE();
  }
}