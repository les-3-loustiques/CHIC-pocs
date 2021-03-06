#include "p_game.h"

BaseType_t xGMainReturned;
TaskHandle_t xGMainHandle = NULL;
BaseType_t xDisplayManagerReturned;
TaskHandle_t xDisplayManagerHandle = NULL;
BaseType_t xTouchPanelReturned;
TaskHandle_t xTouchPanelHandle = NULL;
BaseType_t xSoundManagerReturned;
TaskHandle_t xSoundManagerHandle = NULL;
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
  lm_init(LM_SPI0_INSTANCE, LM_SPI1_INSTANCE, &xDisplayManagerHandle);
}

void game_initTouchScreen() {
  touchpanel_init();
}

void game_splashScreen() {
  const TickType_t xDelay = 150; // super effect of de la mort qui tue
  const TickType_t xDelay2 = 1500;
  TickType_t xLastWakeTime;
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  //lm_setLedsColor(lm_colorBuilder(0x50, 0x50, 0x50));
  //  lm_setSingleLedColorOfPartition(1, 1, lm_colorBuilder(0x90, 0x50, 0x50));
  //  lm_setSingleLedColorOfButton(4, 1, 1, lm_colorBuilder(0x0, 0x50, 0));
  //  lm_setVerticalLineOfPartition(9, lm_colorBuilder(0x0, 0x0, 0x50));
  lm_setHorizontalLineOfPartition(2, lm_colorBuilder(0x50, 0x50, 0x50));
  lm_setHorizontalLineOfPartition(4, lm_colorBuilder(0x50, 0x50, 0x50));
  lm_setHorizontalLineOfPartition(6, lm_colorBuilder(0x50, 0x50, 0x50));
  lm_setHorizontalLineOfPartition(8, lm_colorBuilder(0x50, 0x50, 0x50));
  lm_setHorizontalLineOfPartition(10, lm_colorBuilder(0x50, 0x50, 0x50));
  //  lm_setButtonsColor(1, lm_colorBuilder(0x0, 0x0, 0x50));
  //  lm_setButtonsColor(3, lm_colorBuilder(0x0, 0x50, 0x0));
  //  lm_setButtonsColor(5, lm_colorBuilder(0x50, 0x0, 0x0));
  //  lm_setButtonsColor(7, lm_colorBuilder(0x50, 0x50, 0x50));
  //  lm_setLedsColor(lm_colorBuilder(0x50, 0x50, 0x50));
//  lm_spi_send();
//
//  int letterNumber = 0;
//  int offsetX = 7;
//  int offsetY = 5;
//  int text[] = {6, 20, 8, 3, 14};
  /*
  int j = 0, i = 0;
  for (i = 0; i < letterNumber; i++) {
    for (j = 0; j < alphaPointNumber; j++) {
      xLastWakeTime = xTaskGetTickCount();
      if ((alpha[text[i]][0][j] == -1) || (alpha[text[i]][1][j] == -1)) {
        break;
      }
      int singleOffset = !((alpha[text[i]][0][j] + offsetX) % 2);
      lm_setSingleLedColor(alpha[text[i]][0][j] + offsetX, alpha[text[i]][1][j] + offsetY - singleOffset, lm_colorBuilder(i * 3, j * 3, 50));
      //lm_setLedColor(lm_colorBuilder(0,20,0));
      lm_spi_send();
      vTaskDelayUntil(&xLastWakeTime, xDelay);
      //nrf_delay_ms(100); //problematic value, you can't use a freertos primitive outside a task even if the task directly call that function
    }
    offsetX += alphaWidth[text[i]] + 1;
  }*/
  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(1, lm_colorBuilder(0xff-0xf, 0x00-0xf, 0x1a-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(1, lm_colorBuilder(0xff, 0x00, 0x1a));  
  lm_setButtonsColor(2, lm_colorBuilder(0xff-0xf, 0x00-0xf, 0xd9-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  lm_setButtonsColor(2, lm_colorBuilder(0xff, 0x00, 0xd9));
  lm_setButtonsColor(3, lm_colorBuilder(0x65-0xf, 0x00-0xf, 0xff-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(3, lm_colorBuilder(0x65, 0x00, 0xff));
  lm_setButtonsColor(4, lm_colorBuilder(0x00-0xf, 0x5a-0xf, 0xff-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(4, lm_colorBuilder(0x00, 0x5a, 0xff));
  lm_setButtonsColor(5, lm_colorBuilder(0x00-0xf, 0xff-0xf, 0xe5-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(5, lm_colorBuilder(0x00, 0xff, 0xe5));
  lm_setButtonsColor(6, lm_colorBuilder(0x00-0xf, 0xff-0xf, 0x25-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(6, lm_colorBuilder(0x00, 0xff, 0x25));
  lm_setButtonsColor(7, lm_colorBuilder(0x9a-0xf, 0xff-0xf, 0x00-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(7, lm_colorBuilder(0x9a, 0xff, 0x00));
  lm_setButtonsColor(8, lm_colorBuilder(0xff-0xf, 0xa5-0xf, 0x00-0xf));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay);
  lm_setButtonsColor(8, lm_colorBuilder(0xff, 0xa5, 0x00));
  xLastWakeTime = xTaskGetTickCount();
  lm_spi_send();

  vTaskDelayUntil(&xLastWakeTime, xDelay2);
}

////////////////////////////////////////////////////TASKS

void vGameMain(void *pvParameters) {
  //32BIT NOTIFICATION REGISTER: bits 0-7 is for touch panel
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue;
  TickType_t xLastWakeTime;
  const TickType_t xDelay = 1;
  while (gData->gameState >= 0) {
    switch (gData->gameState) {
    case 0:
      gData->gameState = 1;
      break;
    case 1:
      xLastWakeTime = xTaskGetTickCount();
      //        xTaskNotifyWait(0x00,
      //            0xff,
      //            &ulNotifiedValue, /* Notified value pass out in
      //                                                  ulNotifiedValue. */
      //            0);               /* Block indefinitely. */
      //
      //        if ((ulNotifiedValue & 0xff) != 0) {
      //          printf(" buttons pressed : %x\n", ulNotifiedValue);
      //        }
      xTaskNotify(xDisplayManagerHandle, 0x1, eSetBits); //send picture
      vTaskDelayUntil(&xLastWakeTime, xDelay);
      break;
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

void vDisplayManager(void *pvParameters) {
  //32BIT NOTIFICATION REGISTER: bit 0 is for main and bit 1 is for spi notifications
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue = 0;
  TickType_t xLastWakeTime;
  /* Block for 50ms. */
  game_splashScreen();
  const TickType_t xDelay = 0;
  int z = 0;
  for (;;) {
    if (gData->gameState == 1) {
      ulNotifiedValue = 0;
      while ((ulNotifiedValue & 0x01) == 0) {
        /* Bit 0 was set - process whichever event is represented by bit 0. */
        xTaskNotifyWait(0x00,
            0x00,
            &ulNotifiedValue, /* Notified value pass out in
                                              ulNotifiedValue. */
            0);             /* Block indefinitely. */
      }
      xLastWakeTime = xTaskGetTickCount();

      lm_setHorizontalLineOfPartition(z % 12, lm_colorBuilder(10, z, z));

      if (z > 120) {
        z = 0;
      }
      lm_spi_send();
      z++;
      ulNotifiedValue = 0;
      while ((ulNotifiedValue & 0x02) == 0) {
        /* Bit 0 was set - process whichever event is represented by bit 0. */
        xTaskNotifyWait(0x00,
            0x2,
            &ulNotifiedValue, /* Notified value pass out in
                                              ulNotifiedValue. */
            60);             /* Block indefinitely. */
      }
      vTaskDelayUntil(&xLastWakeTime, xDelay);
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

void vTouchPanel(void *pvParameters) {
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  gameData *gData = (gameData *)pvParameters;
  while (gData->gameState == 1) {
    ulTaskNotifyTake(pdTRUE, /* Clear the notification value before exiting. */
        portMAX_DELAY);      /* Block indefinitely. */

    //  besoin d'tre modifi avec une variable gloable ///////////////////////////////////////////////////////////////////////////////
    xTaskNotify(&xGMainHandle, (uint16_t)touchpanel_get_pressed_buttons(0), eSetBits); //send picture
  }

  /* Tasks must not attempt to return from their implementing
      function or otherwise exit.  In newer FreeRTOS port
      attempting to do so will result in an configASSERT() being
      called if it is defined.  If it is necessary for a task to
      exit then have the task call vTaskDelete( NULL ) to ensure
      its exit is clean. */
  vTaskDelete(NULL);
}

void vSoundManager(void *pvParameters) {
  /* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. */
  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue;

  nrf_gpio_cfg_output(33);
  nrf_gpio_cfg_output(34);
  nrf_gpio_cfg_output(35);
  nrf_gpio_cfg_output(36);
  nrf_gpio_cfg_output(37);
  nrf_gpio_cfg_output(38);
  nrf_gpio_cfg_output(39);
  nrf_gpio_cfg_output(40);

  while (gData->gameState == 1) {
    /* Block indefinitely (without a timeout, so no need to check the function's
        return value) to wait for a notification.

        Bits in this RTOS task's notification value are set by the notifying
        tasks and interrupts to indicate which events have occurred. */
    xTaskNotifyWait(0x00, /* Don't clear any notification bits on entry. */
        0xff,             /* Reset the notification value to 0 on exit. */
        &ulNotifiedValue, /* Notified value pass out in
                                              ulNotifiedValue. */
        portMAX_DELAY);   /* Block indefinitely. */

    /* Process any events that have been latched in the notified value. */
    int i = 7;
    if ((ulNotifiedValue & 0x01) != 0) {
      /* Bit 0 was set - process whichever event is represented by bit 0. */
    }

    if ((ulNotifiedValue & 0x02) != 0) {
      /* Bit 1 was set - process whichever event is represented by bit 1. */
    }

    if ((ulNotifiedValue & 0x04) != 0) {
      /* Bit 2 was set - process whichever event is represented by bit 2. */
    }

    if ((ulNotifiedValue & 0x08) != 0) {
      /* Bit 3 was set - process whichever event is represented by bit 3. */
    }

    if ((ulNotifiedValue & 0x10) != 0) {
      /* Bit 4 was set - process whichever event is represented by bit 4. */
    }

    if ((ulNotifiedValue & 0x20) != 0) {
      /* Bit 2 was set - process whichever event is represented by bit 5. */
    }

    if ((ulNotifiedValue & 0x40) != 0) {
      /* Bit 2 was set - process whichever event is represented by bit 6. */
    }

    if ((ulNotifiedValue & 0x80) != 0) {
      /* Bit 2 was set - process whichever event is represented by bit 7. */
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

////////////////////////////////////////////////////TASKS END

void game_initTasks() {
  game_initLedMatrix();
  //game_initTouchScreen();
  gData.gameState = 0;
  /* Create the task, storing the handle. */
  xGMainReturned = xTaskCreate(
      vGameMain,      /* Function that implements the task. */
      "GameMain",     /* Text name for the task. */
      50,             /* Stack size in words, not bytes. */
      &gData,         /* Parameter passed into the task. */
      4,              /* Priority at which the task is created. */
      &xGMainHandle); /* Used to pass out the created task's handle. */

  if (xGMainReturned != pdPASS) {
    printf("error creating a task");
    vTaskDelete(xGMainHandle);
  }
  /* Create the task, storing the handle. */
  xDisplayManagerReturned = xTaskCreate(
      vDisplayManager,         /* Function that implements the task. */
      "DisplayManager",        /* Text name for the task. */
      880,                     /* Stack size in words, not bytes. */
      &gData,                  /* Parameter passed into the task. */
      3,                       //tskIDLE_PRIORITY, /* Priority at which the task is created. */
      &xDisplayManagerHandle); /* Used to pass out the created task's handle. */

  if (xDisplayManagerReturned != pdPASS) {
    printf("error creating a task");
    vTaskDelete(xDisplayManagerHandle);
  }
  /* Create the task, storing the handle. */
  // xTouchPanelReturned = xTaskCreate(
  //     vTouchPanel,         /* Function that implements the task. */
  //    "TouchPanel",        /* Text name for the task. */
  //     30,                  /* Stack size in words, not bytes. */
  //     &gData,              /* Parameter passed into the task. */
  //     2,                   //tskIDLE_PRIORITY, /* Priority at which the task is created. */
  //     &xTouchPanelHandle); /* Used to pass out the created task's handle. */

  // if (xTouchPanelReturned != pdPASS) {
  //   printf("error creating a task");
  //  vTaskDelete(xTouchPanelHandle);
  //}
  /* Create the task, storing the handle. */
  xSoundManagerReturned = xTaskCreate(
      vSoundManager,         /* Function that implements the task. */
      "SoundManager",        /* Text name for the task. */
      50,                    /* Stack size in words, not bytes. */
      &gData,                /* Parameter passed into the task. */
      1,                     //tskIDLE_PRIORITY, /* Priority at which the task is created. */
      &xSoundManagerHandle); /* Used to pass out the created task's handle. */

  if (xSoundManagerReturned != pdPASS) {
    printf("error creating a task");
    vTaskDelete(xSoundManagerHandle);
  }
}

// handler for GPIOTE
void GPIOTE_IRQHandler(void) {

  uint8_t event_0 = 0;
  uint8_t event_1 = 0;
  if ((event_0 = nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_0)) || (event_1 = nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_1) << 1)) {

    // event_0 is an event generated by touchpanel 0
    // event_1 is an event generated by touchpanel 1
    uint8_t ulNotifiedValue = touchpanel_get_pressed_buttons(event_0 | event_1);

    printf("sadfas %d\n", ulNotifiedValue);

    int del = 150;
    if ((ulNotifiedValue & 0x01) != 0) {
      nrf_gpio_pin_write(33, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(33, 0);
      /* Bit 0 was set - process whichever event is represented by bit 0. */
    }

    if ((ulNotifiedValue & 0x02) != 0) {
      nrf_gpio_pin_write(34, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(34, 0);
      /* Bit 1 was set - process whichever event is represented by bit 1. */
    }

    if ((ulNotifiedValue & 0x04) != 0) {
      nrf_gpio_pin_write(35, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(35, 0);
      /* Bit 2 was set - process whichever event is represented by bit 2. */
    }

    if ((ulNotifiedValue & 0x08) != 0) {
      nrf_gpio_pin_write(36, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(36, 0);
      /* Bit 3 was set - process whichever event is represented by bit 3. */
    }

    if ((ulNotifiedValue & 0x10) != 0) {
      nrf_gpio_pin_write(37, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(37, 0);
      /* Bit 4 was set - process whichever event is represented by bit 4. */
    }

    if ((ulNotifiedValue & 0x20) != 0) {
      nrf_gpio_pin_write(38, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(38, 0);
      /* Bit 2 was set - process whichever event is represented by bit 5. */
    }

    if ((ulNotifiedValue & 0x40) != 0) {
      nrf_gpio_pin_write(39, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(39, 0);
      /* Bit 2 was set - process whichever event is represented by bit 6. */
    }

    if ((ulNotifiedValue & 0x80) != 0) {
      nrf_gpio_pin_write(40, 1);
      nrf_delay_ms(del);
      nrf_gpio_pin_write(40, 0);
      /* Bit 2 was set - process whichever event is represented by bit 7. */
    }

    vTaskNotifyGiveFromISR(xTouchPanelHandle, pdTRUE);
    if (nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_0))
      nrf_gpiote_event_clear(NRF_GPIOTE_EVENTS_IN_0);
    if (nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_1))
      nrf_gpiote_event_clear(NRF_GPIOTE_EVENTS_IN_1);
  }
}