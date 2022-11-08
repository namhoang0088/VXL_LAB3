/*
 * toggleLED.c
 *
 *  Created on: Nov 7, 2022
 *      Author: ACER
 */
#include "toggleLED.h"
#include "main.h"
#include "global.h"
int counter1 = 50;
void toggleLED(){
	if(Mode == 2 ){
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		if(counter1 > 0){
			counter1--;
		}
		if(counter1 <= 0){
			counter1 = 50;
			HAL_GPIO_TogglePin ( RED1_GPIO_Port , RED1_Pin );
			HAL_GPIO_TogglePin ( RED2_GPIO_Port , RED2_Pin );
		}
	}
	if(Mode == 3 ){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		if(counter1 > 0){
			counter1--;
		}
		if(counter1 <= 0){
			counter1 = 50;
			HAL_GPIO_TogglePin ( YELLOW1_GPIO_Port , YELLOW1_Pin );
			HAL_GPIO_TogglePin ( YELLOW2_GPIO_Port , YELLOW2_Pin );
		}
	}
	if(Mode == 4 ){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		if(counter1 > 0){
			counter1--;
		}
		if(counter1 <= 0){
			counter1 = 50;
			HAL_GPIO_TogglePin ( GREEN1_GPIO_Port , GREEN1_Pin );
			HAL_GPIO_TogglePin ( GREEN2_GPIO_Port , GREEN2_Pin );
		}
	}
}

