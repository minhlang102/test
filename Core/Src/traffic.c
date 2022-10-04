/*
 * traffic.c
 *
 *  Created on: Oct 4, 2022
 *      Author: minhl
 */

#ifndef SRC_TRAFFIC_C_
#define SRC_TRAFFIC_C_

#include "traffic.h"
#include "global.h"
#include "main.h"

void setColor(int color) {
	switch (color) {
		case INIT:
			HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin | LED_YELLOW_Pin, GPIO_PIN_SET);
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin | LED_YELLOW_Pin, GPIO_PIN_SET);
			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_RED_Pin | LED_YELLOW_Pin, GPIO_PIN_SET);
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin | LED_RED_Pin, GPIO_PIN_SET);
			break;
		default:
			break;
	}
}

#endif /* SRC_TRAFFIC_C_ */
