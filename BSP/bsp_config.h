// inorder to decouple from main
#ifndef BSP_CONFIG_H
#define BSP_CONFIG_H

#include "stm32f4xx_hal.h"

#define LED_PORT GPIOA
#define LED_PIN  GPIO_PIN_5

extern UART_HandleTypeDef huart2;

#endif
