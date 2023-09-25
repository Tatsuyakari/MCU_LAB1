/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#define R2_Pin GPIO_PIN_0
#define R2_GPIO_Port GPIOA
#define Y2_Pin GPIO_PIN_1
#define Y2_GPIO_Port GPIOA
#define G2_Pin GPIO_PIN_2
#define G2_GPIO_Port GPIOA
#define R1_Pin GPIO_PIN_5
#define R1_GPIO_Port GPIOA
#define Y1_Pin GPIO_PIN_6
#define Y1_GPIO_Port GPIOA
#define G1_Pin GPIO_PIN_7
#define G1_GPIO_Port GPIOA
#define LA1_Pin GPIO_PIN_0
#define LA1_GPIO_Port GPIOB
#define LB1_Pin GPIO_PIN_1
#define LB1_GPIO_Port GPIOB
#define LC1_Pin GPIO_PIN_2
#define LC1_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_10
#define LD2_GPIO_Port GPIOB
#define LE2_Pin GPIO_PIN_11
#define LE2_GPIO_Port GPIOB
#define LF2_Pin GPIO_PIN_12
#define LF2_GPIO_Port GPIOB
#define LG2_Pin GPIO_PIN_13
#define LG2_GPIO_Port GPIOB
#define LD1_Pin GPIO_PIN_3
#define LD1_GPIO_Port GPIOB
#define LE1_Pin GPIO_PIN_4
#define LE1_GPIO_Port GPIOB
#define LF1_Pin GPIO_PIN_5
#define LF1_GPIO_Port GPIOB
#define LG1_Pin GPIO_PIN_6
#define LG1_GPIO_Port GPIOB
#define LA2_Pin GPIO_PIN_7
#define LA2_GPIO_Port GPIOB
#define LB2_Pin GPIO_PIN_8
#define LB2_GPIO_Port GPIOB
#define LC2_Pin GPIO_PIN_9
#define LC2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
