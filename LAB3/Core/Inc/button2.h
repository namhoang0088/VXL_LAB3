/*
 * button2.h
 *
 *  Created on: Oct 23, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "main.h"
#include "global.h"
#include "display7SEG.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button2_flag;

void getKeyInput2();

#endif /* INC_BUTTON2_H_ */
