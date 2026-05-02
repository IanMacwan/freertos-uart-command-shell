#include "gpio_driver.h"

void GPIO_Write(GPIO_TypeDef *port, uint16_t pin, GPIO_PinState state) {
  HAL_GPIO_WritePin(port, pin, state);
}

void GPIO_Toggle(GPIO_TypeDef *port, uint16_t pin) {
  HAL_GPIO_TogglePin(port, pin);
}
