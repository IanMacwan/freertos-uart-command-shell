#include "uart_driver.h"
#include "bsp_config.h"
#include "stm32f4xx_hal_uart.h"
#include "string.h"

void UART_SendString(const char *str) {
  if (str == NULL) {
    return;
  }

  HAL_UART_Transmit(&huart2, (uint8_t *)str, strlen(str), HAL_MAX_DELAY);
}

void UART_StartReceiveIT(void) {
  
}

void UART_RxCallback(uint8_t byte) {

}
