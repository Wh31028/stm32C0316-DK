;/*
 * utils.c
 *
 *  Created on: Aug 4, 2025
 *      Author: wh31028
 */


#include "utils.h"



void delay(uint32_t time_ms)
{
  HAL_Delay(time_ms);
}

uint32_t millis(void)
{
  return HAL_GetTick();
}

