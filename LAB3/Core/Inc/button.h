/*
 * button.h
 *
 *  Created on: Oct 22, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "display7SEG.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;

void getKeyInput();
#endif /* INC_BUTTON_H_ */
