#ifndef GAME
#define GAME

#include "p_lm.h"
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "peer_manager.h"
#include "semphr.h"
#include "nrf_delay.h"

void game_initTasks();
void game_initLedMatrix();

#endif