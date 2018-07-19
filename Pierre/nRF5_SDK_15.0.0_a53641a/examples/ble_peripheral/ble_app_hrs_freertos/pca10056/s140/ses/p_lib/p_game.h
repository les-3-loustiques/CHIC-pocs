#ifndef GAME
#define GAME

#include "p_lm.h"
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "peer_manager.h"
#include "semphr.h"
#include "nrf_delay.h"
#include "g_gpiote.h"
#include "g_lib_touch_panel.h"
#include "portmacro_cmsis.h"

void game_initTasks();
void game_initLedMatrix();
void game_initTouchScreen();
void GPIOTE_IRQHandler(void);

typedef struct gameData{
  int gameState;
}gameData;

#endif