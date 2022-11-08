/*
 * button3.c
 *
 *  Created on: Oct 23, 2022
 *      Author: ACER
 */

#include "button3.h"

int keyreg0 = NORMAL_STATE;
int keyreg1 = NORMAL_STATE;
int keyreg2 = NORMAL_STATE;
int keyreg3 = NORMAL_STATE;

int TimeOutForKeyPress3 =  500;
int button3_flag = 0;

int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess3(){
	switch(Mode){
	case 1:
		timeReplace = 0;
		break;
	case 2:
		timeRED = timeReplace;
		break;
	case 3:
		timeYELLOW = timeReplace;
		break;
	case 4:
		timeGREEN = timeReplace;
		break;
	default:
		break;
	}
}

void getKeyInput3(){
  keyreg2 = keyreg1;
  keyreg1 = keyreg0;
  keyreg0 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
  if ((keyreg1 == keyreg0) && (keyreg1 == keyreg2)){
    if (keyreg2 != keyreg3){
      keyreg3 = keyreg2;

      if (keyreg3 == PRESSED_STATE){
        TimeOutForKeyPress3 = 500;
        subKeyProcess3();
      }
    }else{
       TimeOutForKeyPress3 --;
        if (TimeOutForKeyPress3 == 0){
          keyreg3 = NORMAL_STATE;
        }
    }
  }
}


