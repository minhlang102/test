/*
 * fsm_automatic.c
 *
 *  Created on: Oct 4, 2022
 *      Author: minhl
 */

#include "fsm_automatic.h"

void fsm_automatic_run() {
	switch (status) {
		case INIT:
			setColor(status);
			setTimer1(5000);
			status = AUTO_RED;
			break;
		case AUTO_RED:
			if (timer1_flag == 1) {
				setColor(status);
				setTimer1(3000);
				status = AUTO_GREEN;
				timer1_flag = 0;
			}
			break;
		case AUTO_GREEN:
			if (timer1_flag == 1) {
				setColor(status);
				setTimer1(2000);
				status = AUTO_YELLOW;
				timer1_flag = 0;
			}
			break;
		case AUTO_YELLOW:
			if (timer1_flag == 1) {
				setColor(status);
				setTimer1(5000);
				status = AUTO_RED;
				timer1_flag = 0;
			}
			break;
		default:
			break;
	}
}
