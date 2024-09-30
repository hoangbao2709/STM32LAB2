/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define h_1_1_Pin GPIO_PIN_0
#define h_1_1_GPIO_Port GPIOA
#define h_1_2_Pin GPIO_PIN_1
#define h_1_2_GPIO_Port GPIOA
#define h_1_3_Pin GPIO_PIN_2
#define h_1_3_GPIO_Port GPIOA
#define h_1_4_Pin GPIO_PIN_3
#define h_1_4_GPIO_Port GPIOA
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define h_1_6_Pin GPIO_PIN_5
#define h_1_6_GPIO_Port GPIOA
#define h_1_7_Pin GPIO_PIN_6
#define h_1_7_GPIO_Port GPIOA
#define h_2_1_Pin GPIO_PIN_7
#define h_2_1_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define m_4_Pin GPIO_PIN_10
#define m_4_GPIO_Port GPIOB
#define m_5_Pin GPIO_PIN_11
#define m_5_GPIO_Port GPIOB
#define m_6_Pin GPIO_PIN_12
#define m_6_GPIO_Port GPIOB
#define m_7_Pin GPIO_PIN_13
#define m_7_GPIO_Port GPIOB
#define h_2_2_Pin GPIO_PIN_8
#define h_2_2_GPIO_Port GPIOA
#define h_2_3_Pin GPIO_PIN_9
#define h_2_3_GPIO_Port GPIOA
#define h_2_4_Pin GPIO_PIN_10
#define h_2_4_GPIO_Port GPIOA
#define h_2_5_Pin GPIO_PIN_11
#define h_2_5_GPIO_Port GPIOA
#define h_2_6_Pin GPIO_PIN_12
#define h_2_6_GPIO_Port GPIOA
#define h_2_7_Pin GPIO_PIN_13
#define h_2_7_GPIO_Port GPIOA
#define h_1_5_Pin GPIO_PIN_15
#define h_1_5_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define m_1_Pin GPIO_PIN_7
#define m_1_GPIO_Port GPIOB
#define m_2_Pin GPIO_PIN_8
#define m_2_GPIO_Port GPIOB
#define m_3_Pin GPIO_PIN_9
#define m_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
