/*
 * button2.c
 *
 *  Created on: Oct 23, 2022
 *      Author: ACER
 */
#include "button2.h"

int keyReg0 = NORMAL_STATE;
int keyReg1 = NORMAL_STATE;
int keyReg2 = NORMAL_STATE;
int keyReg3 = NORMAL_STATE;

int TimeOutForKeyPress2 =  500;
int button2_flag = 0;

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess2(){
	timeReplace = timeReplace +100;
	displayReplaceTIME(timeReplace/100);
}

void getKeyInput2(){
  keyReg2 = keyReg1;
  keyReg1 = keyReg0;
  keyReg0 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
  if ((keyReg1 == keyReg0) && (keyReg1 == keyReg2)){
    if (keyReg2 != keyReg3){
      keyReg3 = keyReg2;

      if (keyReg3 == PRESSED_STATE){
        TimeOutForKeyPress2 = 500;
        subKeyProcess2();
      }
    }else{
       TimeOutForKeyPress2 --;
        if (TimeOutForKeyPress2 == 0){
          keyReg3 = NORMAL_STATE;
        }
    }
  }
}
