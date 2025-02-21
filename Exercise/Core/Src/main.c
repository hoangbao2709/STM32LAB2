/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int timer0_counter = 0;
int timer0_flag = 0;
int TIMER_CYCLE = 1;
void setTimer0 ( int duration ){
	timer0_counter = duration / TIMER_CYCLE ;
	timer0_flag = 0;
}
void timer_run (){
	if( timer0_counter > 0){
		timer0_counter --;
		if( timer0_counter == 0) timer0_flag = 1;
	}
}

void GetROW(uint8_t *binary_array){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, binary_array[0]);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, binary_array[1]);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, binary_array[2]);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, binary_array[3]);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, binary_array[4]);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, binary_array[5]);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, binary_array[6]);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, binary_array[7]);
}

void GetCOL(uint8_t *binary_array_1){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, binary_array_1[0]);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, binary_array_1[1]);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, binary_array_1[2]);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, binary_array_1[3]);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, binary_array_1[4]);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, binary_array_1[5]);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, binary_array_1[6]);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, binary_array_1[7]);
}

uint8_t* convert_to_binary_array(uint8_t value) {
  uint8_t *binary_array = (uint8_t*)malloc(sizeof(uint8_t) * 8);
  for (int i = 0; i < 8; i++) {
    binary_array[i] = (value >> i) & 1;
  }
  return binary_array;
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t ChuA[8] = {0xE7, 0xC3 , 0x99 , 0x99 , 0x81 , 0x81 , 0x99 , 0x99 };
uint8_t ChuB[8] = {0xC3, 0xBB , 0xBB , 0xC3 , 0xBB , 0xBB , 0xBB , 0xC3 };
uint8_t ChuC[8] = {0x83, 0x81 , 0xF9 , 0xF9 , 0xF9 , 0xF9 , 0x81 , 0x83 };
uint8_t ChuD[8] = {0xC1, 0x81 , 0x99 , 0x99 , 0x99 , 0x99 , 0x81 , 0xC1 };
uint8_t ChuE[8] = {0x81, 0x81 , 0xF9 , 0x81 , 0x81 , 0xF9 , 0x81 , 0x81 };
uint8_t ChuF[8] = {0x81, 0x81 , 0xF9 , 0x81 , 0x81 , 0xF9 , 0xF9 , 0xF9 };
uint8_t ChuG[8] = {0x83, 0x81 , 0xF9 , 0x09 , 0x09 , 0x99 , 0x81 , 0xC3 };
uint8_t ChuH[8] = {0x99, 0x99 , 0x99 , 0x81 , 0x81 , 0x99 , 0x99 , 0x99 };
uint8_t ChuI[8] = {0xC3, 0xC3 , 0xE7 , 0xE7 , 0xE7 , 0xE7 , 0xC3 , 0xC3 };
uint8_t ChuJ[8] = {0xC3, 0xC3 , 0xCF , 0xCF , 0xCF , 0xCB , 0xC3 , 0xC7 };
uint8_t ChuK[8] = {0x99, 0xC9 , 0xE1 , 0xF1 , 0xF1 , 0xE1 , 0xC9 , 0x99 };
uint8_t ChuL[8] = {0xF3, 0xF3 , 0xF3 , 0xF3 , 0xF3 , 0xF3 , 0xC3 , 0xC3 };

uint8_t ChuM[8] = {0x3C, 0x18, 0x00, 0x24, 0x3C, 0x3C, 0x3C, 0x3C};
uint8_t ChuN[8] = {0x3C, 0x38, 0x30, 0x24, 0x24, 0x0C, 0x1C, 0x3C};
uint8_t ChuO[8] = {0xC3, 0x81, 0x99, 0x99, 0x99, 0x99, 0x81, 0xC3};
uint8_t ChuP[8] = {0xE1, 0xD9, 0xD9, 0xD9, 0xE1, 0xF9, 0xF9, 0xF9};
uint8_t ChuQ[8] = {0xE3, 0xDD, 0xDD, 0xDD, 0xDD, 0xD5, 0xCD, 0x83};
uint8_t ChuR[8] = {0xE1, 0xD9, 0xD9, 0xD9, 0xE1, 0xF1, 0xE9, 0xD9};
uint8_t ChuS[8] = {0xC3, 0xDB, 0xFB, 0xC3, 0xDF, 0xDF, 0xDB, 0xC3};
uint8_t ChuT[8] = {0x81, 0x81, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7};
uint8_t ChuU[8] = {0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3};
uint8_t ChuV[8] = {0x3C, 0x3C, 0xBD, 0x99, 0xDB, 0xC3, 0xE7, 0xE7};
uint8_t ChuW[8] = {0x7E, 0x7E, 0x7E, 0xA5, 0xA5, 0xA5, 0xDB, 0xDB};
uint8_t ChuX[8] = {0x7E, 0x3C, 0x99, 0xC3, 0xC3, 0x99, 0x3C, 0x7E};
uint8_t ChuY[8] = {0xBD, 0x99, 0xDB, 0xC3, 0xE7, 0xE7, 0xE7, 0xE7};
uint8_t ChuZ[8] = {0x81, 0x81, 0x9F, 0xC7, 0xE3, 0xF9, 0x81, 0x81};

int x = 0;

uint8_t Chu[26][8] = {
    {0xE7, 0xC3, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99},
    {0xC3, 0xBB, 0xBB, 0xC3, 0xBB, 0xBB, 0xBB, 0xC3},
    {0x83, 0x81, 0xF9, 0xF9, 0xF9, 0xF9, 0x81, 0x83},
    {0xC1, 0x81, 0x99, 0x99, 0x99, 0x99, 0x81, 0xC1},
    {0x81, 0x81, 0xF9, 0x81, 0x81, 0xF9, 0x81, 0x81},
    {0x81, 0x81, 0xF9, 0x81, 0x81, 0xF9, 0xF9, 0xF9},
    {0x83, 0x81, 0xF9, 0x09, 0x09, 0x99, 0x81, 0xC3},
    {0x99, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99, 0x99},
    {0xC3, 0xC3, 0xE7, 0xE7, 0xE7, 0xE7, 0xC3, 0xC3},
    {0xC3, 0xC3, 0xCF, 0xCF, 0xCF, 0xCB, 0xC3, 0xC7},
    {0x99, 0xC9, 0xE1, 0xF1, 0xF1, 0xE1, 0xC9, 0x99},
    {0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xC3, 0xC3},
    {0x3C, 0x18, 0x00, 0x24, 0x3C, 0x3C, 0x3C, 0x3C},
    {0x3C, 0x38, 0x30, 0x24, 0x24, 0x0C, 0x1C, 0x3C},
    {0xC3, 0x81, 0x99, 0x99, 0x99, 0x99, 0x81, 0xC3},
    {0xE1, 0xD9, 0xD9, 0xD9, 0xE1, 0xF9, 0xF9, 0xF9},
    {0xE3, 0xDD, 0xDD, 0xDD, 0xDD, 0xD5, 0xCD, 0x83},
    {0xE1, 0xD9, 0xD9, 0xD9, 0xE1, 0xF1, 0xE9, 0xD9},
    {0xC3, 0xDB, 0xFB, 0xC3, 0xDF, 0xDF, 0xDB, 0xC3},
    {0x81, 0x81, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7},
    {0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3},
    {0x3C, 0x3C, 0xBD, 0x99, 0xDB, 0xC3, 0xE7, 0xE7},
    {0x7E, 0x7E, 0x7E, 0xA5, 0xA5, 0xA5, 0xDB, 0xDB},
    {0x7E, 0x3C, 0x99, 0xC3, 0xC3, 0x99, 0x3C, 0x7E},
    {0xBD, 0x99, 0xDB, 0xC3, 0xE7, 0xE7, 0xE7, 0xE7},
    {0x81, 0x81, 0x9F, 0xC7, 0xE3, 0xF9, 0x81, 0x81}
};


void updateLEDMatrix (int index ){
	uint8_t *binary_array_1 = convert_to_binary_array(ChuA[index]);
	GetCOL(binary_array_1);
	free(binary_array_1);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT (& htim2 );
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  for(x = 0; x < 26; x++){
		  for(int i = 0; i < 100; i++){
			  uint8_t number = 0xFE;
			  for(int j = 0; j <= 8; j++){
				  uint8_t *binary_array = convert_to_binary_array(number);
				  GetROW(binary_array);
				  updateLEDMatrix(j);
				  number = (number << 1) | 0x01;
				  HAL_Delay(1);
			  }
		  }
	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|DOT_Pin|GPIO_PIN_5
                          |EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin
                          |ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin
                          |ENM6_Pin|ENM7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|ROW2_Pin
                          |ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin
                          |ROW7_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin
                          |SEG6_Pin|GPIO_PIN_7|ROW0_Pin|ROW1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : ENM0_Pin ENM1_Pin DOT_Pin PA5
                           EN0_Pin EN1_Pin EN2_Pin EN3_Pin
                           ENM2_Pin ENM3_Pin ENM4_Pin ENM5_Pin
                           ENM6_Pin ENM7_Pin */
  GPIO_InitStruct.Pin = ENM0_Pin|ENM1_Pin|DOT_Pin|GPIO_PIN_5
                          |EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin
                          |ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin
                          |ENM6_Pin|ENM7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG0_Pin SEG1_Pin SEG2_Pin ROW2_Pin
                           ROW3_Pin ROW4_Pin ROW5_Pin ROW6_Pin
                           ROW7_Pin SEG3_Pin SEG4_Pin SEG5_Pin
                           SEG6_Pin PB7 ROW0_Pin ROW1_Pin */
  GPIO_InitStruct.Pin = SEG0_Pin|SEG1_Pin|SEG2_Pin|ROW2_Pin
                          |ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin
                          |ROW7_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin
                          |SEG6_Pin|GPIO_PIN_7|ROW0_Pin|ROW1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
	timer_run ();
	// YOUR OTHER CODE
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
