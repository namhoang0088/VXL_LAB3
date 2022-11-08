/*
 * button3.h
 *
 *  Created on: Oct 23, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "main.h"
#include "global.h"
#include "display7SEG.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button3_flag;

void getKeyInput3();

#endif /* INC_BUTTON3_H_ */
