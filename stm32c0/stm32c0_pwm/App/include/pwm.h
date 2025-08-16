/*
 * pwm.h
 *
 *  Created on: Aug 4, 2025
 *      Author: wh31028
 */

#ifndef INCLUDE_PWM_H_
#define INCLUDE_PWM_H_

#include "def.h"


bool pwmInit(void);
void pwmWrite(uint8_t ch,uint16_t duty);
uint16_t pwmRead(uint8_t ch);

#endif /* INCLUDE_PWM_H_ */
