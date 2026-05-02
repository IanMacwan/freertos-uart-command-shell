#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include "stm32f4xx_hal.h"

/**
 * @brief Write a value to a GPIO pin
 */
void GPIO_Write(GPIO_TypeDef *port, uint16_t pin, GPIO_PinState state);

/**
 * @brief Toggle a GPIO pin
 */
void GPIO_Toggle(GPIO_TypeDef *port, uint16_t pin);

#endif
