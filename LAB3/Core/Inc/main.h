/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED1_Pin GPIO_PIN_0
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_1
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_2
#define GREEN1_GPIO_Port GPIOA
#define RED2_Pin GPIO_PIN_3
#define RED2_GPIO_Port GPIOA
#define YELLOW2_Pin GPIO_PIN_4
#define YELLOW2_GPIO_Port GPIOA
#define GREEN2_Pin GPIO_PIN_5
#define GREEN2_GPIO_Port GPIOA
#define LED_A_Pin GPIO_PIN_6
#define LED_A_GPIO_Port GPIOA
#define LED_B_Pin GPIO_PIN_7
#define LED_B_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_0
#define Button1_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_1
#define Button2_GPIO_Port GPIOB
#define Button3_Pin GPIO_PIN_2
#define Button3_GPIO_Port GPIOB
#define B_Pin GPIO_PIN_10
#define B_GPIO_Port GPIOB
#define C_Pin GPIO_PIN_11
#define C_GPIO_Port GPIOB
#define D_Pin GPIO_PIN_12
#define D_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_13
#define E_GPIO_Port GPIOB
#define F_Pin GPIO_PIN_14
#define F_GPIO_Port GPIOB
#define G_Pin GPIO_PIN_15
#define G_GPIO_Port GPIOB
#define LED_C_Pin GPIO_PIN_8
#define LED_C_GPIO_Port GPIOA
#define LED_D_Pin GPIO_PIN_9
#define LED_D_GPIO_Port GPIOA
#define LED_E_Pin GPIO_PIN_10
#define LED_E_GPIO_Port GPIOA
#define LED_F_Pin GPIO_PIN_11
#define LED_F_GPIO_Port GPIOA
#define LED_G_Pin GPIO_PIN_12
#define LED_G_GPIO_Port GPIOA
#define AA_Pin GPIO_PIN_15
#define AA_GPIO_Port GPIOA
#define BB_Pin GPIO_PIN_3
#define BB_GPIO_Port GPIOB
#define CC_Pin GPIO_PIN_4
#define CC_GPIO_Port GPIOB
#define DD_Pin GPIO_PIN_5
#define DD_GPIO_Port GPIOB
#define EE_Pin GPIO_PIN_6
#define EE_GPIO_Port GPIOB
#define FF_Pin GPIO_PIN_7
#define FF_GPIO_Port GPIOB
#define GG_Pin GPIO_PIN_8
#define GG_GPIO_Port GPIOB
#define A_Pin GPIO_PIN_9
#define A_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
