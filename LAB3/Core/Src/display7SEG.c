/*
 * display7SEG.c
 *
 *  Created on: Oct 23, 2022
 *      Author: ACER
 */
#include "display7SEG.h"
#include "main.h"
void display7SEG(int counter){
	if(counter == 0){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 1){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 2){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 3){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 4){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 5){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 6){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 7){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 8){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 9){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
}

void displayTIME(int counter){
	if(counter == 0){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
	}
	if(counter == 1){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
	}
	if(counter == 2){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 3){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 4){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 5){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 6){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 7){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
	}
	if(counter == 8){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
	if(counter == 9){
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	}
}

void displayReplaceTIME(int counter){
	if(counter == 0){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, RESET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, SET);
	}
	if(counter == 1){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, SET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, SET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, SET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, SET);
	}
	if(counter == 2){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, SET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, RESET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, SET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 3){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, SET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 4){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, SET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, SET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 5){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, SET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 6){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, SET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, RESET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 7){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, SET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, SET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, SET);
	}
	if(counter == 8){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, RESET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
	if(counter == 9){
		HAL_GPIO_WritePin(AA_GPIO_Port, AA_Pin, RESET);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, RESET);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, RESET);
		HAL_GPIO_WritePin(DD_GPIO_Port, DD_Pin, RESET);
		HAL_GPIO_WritePin(EE_GPIO_Port, EE_Pin, SET);
		HAL_GPIO_WritePin(FF_GPIO_Port, FF_Pin, RESET);
		HAL_GPIO_WritePin(GG_GPIO_Port, GG_Pin, RESET);
	}
}
