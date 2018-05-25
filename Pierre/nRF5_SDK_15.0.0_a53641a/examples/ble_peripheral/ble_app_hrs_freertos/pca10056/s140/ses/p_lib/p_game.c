#include "p_game.h"

BaseType_t xLMReturned;
TaskHandle_t xLMHandle = NULL;

void vLedDimmer(void *pvParameters) {
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  configASSERT(((uint32_t)pvParameters) == 1);
  /* Block for 50ms. */
  const TickType_t xDelay = 50 / portTICK_PERIOD_MS;
  int z = 0;
  for (;;) {
    for (int i = 0; i < COLUMNS; i++) {
      for (int j = 0; j < ROWS; j++) {
        lm_setSingleLedColor(i, j, lm_colorBuilder(i + z, j + z, i * j / z));
        //lm_setLedColor(lm_colorBuilder(255,255,255));
        lm_spi_send();
        vTaskDelay(xDelay);
      }
    }
    z++;
    if (z > 3) {
      z = 0;
    }
  }

  /* Tasks must not attempt to return from their implementing
      function or otherwise exit.  In newer FreeRTOS port
      attempting to do so will result in an configASSERT() being
      called if it is defined.  If it is necessary for a task to
      exit then have the task call vTaskDelete( NULL ) to ensure
      its exit is clean. */
  vTaskDelete(NULL);
}

void game_initTasks() {
game_initLedMatrix();
  /* Create the task, storing the handle. */
  xLMReturned = xTaskCreate(
      vLedDimmer,       /* Function that implements the task. */
      "LedDimmer",      /* Text name for the task. */
      20,               /* Stack size in words, not bytes. */
      (void *)1,        /* Parameter passed into the task. */
      tskIDLE_PRIORITY, /* Priority at which the task is created. */
      &xLMHandle);        /* Used to pass out the created task's handle. */

  if (xLMReturned != pdPASS) {
    printf("error creating a task");
    //vTaskDelete(xHandle);
  }
}

void game_initLedMatrix() {
  lm_init(LM_SPI0_INSTANCE, LM_SPI1_INSTANCE);
}