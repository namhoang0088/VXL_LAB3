/*
 * button.c
 *
 *  Created on: Oct 22, 2022
 *      Author: ACER
 */
#include "button.h"
#include "global.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress =  500;
int button1_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	Mode++;
	if(Mode > 4){
		Mode = 1;
	}
	switch(Mode){
	case 1:
		timeReplace = 0;
		displayReplaceTIME(0);
		break;
	case 2:
		timeReplace = timeRED;
		displayReplaceTIME(timeRED/100);
		break;
	case 3:
		timeReplace = timeYELLOW;
		displayReplaceTIME(timeYELLOW/100);
		break;
	case 4:
		timeReplace = timeGREEN;
		displayReplaceTIME(timeGREEN/100);
		break;
	default:
		break;
	}
}

void getKeyInput(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}
