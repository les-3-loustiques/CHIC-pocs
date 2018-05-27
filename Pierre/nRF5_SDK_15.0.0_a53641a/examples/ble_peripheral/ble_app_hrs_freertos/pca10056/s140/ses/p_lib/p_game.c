#include "p_game.h"

BaseType_t xGReturned;
TaskHandle_t xGHandle = NULL;
BaseType_t xIdleReturned;
TaskHandle_t xIdleHandle = NULL;
uint8_t gpioteIRQ = false; // set if an interrupt have been throwed
gameData gData;

#define alphaPointNumber 30
int alpha[36][2][alphaPointNumber] = {
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8, -1}},                    //a 0
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //b 1
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //c 2
    {{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 9, 10, 1, 8, 9, 2, 8, 9, 2, 3, 4, 5, 6, 7, 8, -1}}, //d 3
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //e 4
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //f 5
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8, -1}},                    //g 6
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //h 7
    {{0, 0, 0, 0, 0, 0, 0, 0, -1}, {1, 2, 3, 4, 5, 6, 7, 8, -1}},                                                                                                              //i 8
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //j 9
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //k 10
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //l 11
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //m 12
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //n 13
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, -1}},        //o 14
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //p 15
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //q 16
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //r 17
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //s 18
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //t 19
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 8, 9, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, -1}},                          //u 20
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //v 21
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //w 22
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //x 23
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //y 24
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //z 25
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //0 26
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //1 27
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //2 28
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //3 29
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //4 30
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //5 31
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //6 32
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //7 33
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},                            //8 34
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}}                             //9 35
};

int alphaWidth[36] = {5, 5, 5, 5, 5, 5, 5, 5, 1, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

void game_initLedMatrix() {
  lm_init(LM_SPI0_INSTANCE, LM_SPI1_INSTANCE);
}

void game_initTouchScreen() {
  touchpanel_init();
}

void vIdleMode(void *pvParameters) {

  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  //configASSERT(((uint32_t)pvParameters) == 1);
  gameData* gData = (gameData *) pvParameters;
  /* Block for 50ms. */
  const TickType_t xDelay = 10 / portTICK_PERIOD_MS;
  int z = 0;
  for (;;) {
    if (gData->gameState == 1) {
      for (int i = 0; i < COLUMNS; i++) {
        for (int j = 0; j < ROWS; j++) {
          lm_setSingleLedColor(i, j, lm_colorBuilder(i, j, z));
          //lm_setLedColor(lm_colorBuilder(z,0,0));
        }
      }
      z++;
      if (z > 120) {
        z = 0;
      }
      lm_spi_send();
      vTaskDelay(xDelay);
    } else {
      taskYIELD();
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

void game_splashScreen() {
  const TickType_t xDelay = 10 / portTICK_PERIOD_MS;
  const TickType_t xDelay2 = 1500 / portTICK_PERIOD_MS;
  lm_setLedColor(lm_colorBuilder(4, 4, 4));
  int letterNumber = 5;
  int offsetX = 7;
  int offsetY = 5;
  int text[] = {6, 20, 8, 3, 14};

  int j = 0, i = 0;
  for (i = 0; i < letterNumber; i++) {
    for (j = 0; j < alphaPointNumber; j++) {
      if ((alpha[text[i]][0][j] == -1) || (alpha[text[i]][1][j] == -1)) {
        break;
      }
      int singleOffset = !((alpha[text[i]][0][j] + offsetX) % 2);
      lm_setSingleLedColor(alpha[text[i]][0][j] + offsetX, alpha[text[i]][1][j] + offsetY - singleOffset, lm_colorBuilder(i * 3, j * 3, 50));
      //lm_setLedColor(lm_colorBuilder(20,30,40));
      lm_spi_send();
      vTaskDelay(xDelay);
    }
    offsetX += alphaWidth[text[i]] + 1;
  }
  vTaskDelay(xDelay2);
}

void vGameMain(void *pvParameters) {
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  gameData* gData = (gameData *) pvParameters;
  configASSERT(((uint32_t)pvParameters) == 1);
  game_splashScreen();
  gData->gameState = 1;
  for (;;) {
    if (gpioteIRQ) {
      int v = touchpanel_get_pressed_buttons();
      printf(" buttons pressed : %x\n", 4);
      gpioteIRQ = false;
    }
    taskYIELD();
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
  game_initTouchScreen();

  gData.gameState = 0;
  /* Create the task, storing the handle. */
    xGReturned = xTaskCreate(
      vGameMain,        /* Function that implements the task. */
      "Game Main",      /* Text name for the task. */
      150,               /* Stack size in words, not bytes. */
      &gData,        /* Parameter passed into the task. */
      tskIDLE_PRIORITY, /* Priority at which the task is created. */
      &xGHandle);       /* Used to pass out the created task's handle. */

  if (xGReturned != pdPASS) {
    printf("error creating a task");
    vTaskDelete(xGHandle);
  }
  /* Create the task, storing the handle. */
  xIdleReturned = xTaskCreate(
      vIdleMode,        /* Function that implements the task. */
      "idleMode",       /* Text name for the task. */
      150,               /* Stack size in words, not bytes. */
      &gData,        /* Parameter passed into the task. */
      tskIDLE_PRIORITY, /* Priority at which the task is created. */
      &xIdleHandle);    /* Used to pass out the created task's handle. */

  if (xIdleReturned != pdPASS) {
    printf("error creating a task");
    vTaskDelete(xIdleHandle);
  }
}

// handler for GPIOTE
void GPIOTE_IRQHandler(void) {
  if (nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_0)) {
      gpioteIRQ = true;
    nrf_gpiote_event_clear(NRF_GPIOTE_EVENTS_IN_0);
  }
}
