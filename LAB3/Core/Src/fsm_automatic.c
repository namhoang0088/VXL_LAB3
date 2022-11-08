/*
 * fsm_automatic.c
 *
 *  Created on: Oct 22, 2022
 *      Author: ACER
 */

#include "fsm_automatic.h"
#include "main.h"
#include "global.h"
void fsm_automatic_run(){
  switch( status ){
  case INIT:
	  status = AUTO_RED;
	  setTimer1(timeRED);
	  break;
  case AUTO_RED:
	  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
	  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
	  if(timer1_flag == 1){
		  status = AUTO_GREEN;
		  setTimer1(timeGREEN);
	  }
	  break;
  case AUTO_GREEN:
	  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
	  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
	  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
	  if(timer1_flag == 1){
		  status = AUTO_YELLOW;
		  setTimer1(timeYELLOW);
	  }
	  break;
  case AUTO_YELLOW:
	  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
	  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
	  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
	  if(timer1_flag == 1){
		  status = AUTO_RED;
		  setTimer1(timeRED);
	  }
	  break;
  default:
	  break;
  }
}

void fsm_automatic_run2(){
  switch( status2 ){
  case INIT:
	  status2 = AUTO_GREEN;
	  setTimer2(timeGREEN);
	  break;
  case AUTO_RED:
	  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
	  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
	  if(timer2_flag == 1){
		  status2 = AUTO_GREEN;
		  setTimer2(timeGREEN);
	  }
	  break;
  case AUTO_GREEN:
	  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
	  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
	  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
	  if(timer2_flag == 1){
		  status2 = AUTO_YELLOW;
		  setTimer2(timeYELLOW);
	  }
	  break;
  case AUTO_YELLOW:
	  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
	  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
	  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	  if(timer2_flag == 1){
		  status2 = AUTO_RED;
		  setTimer2(timeRED);
	  }
	  break;
  default:
	  break;
  }
}
