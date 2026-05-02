#include "led_driver.h"
#include "gpio_driver.h"
#include "bsp_config.h"

void LED_On(void) {
    GPIO_Write(LED_PORT, LED_PIN, GPIO_PIN_SET);
}

void LED_Off(void) {
    GPIO_Write(LED_PORT, LED_PIN, GPIO_PIN_RESET);
}

void LED_Toggle(void) {
    GPIO_Toggle(LED_PORT, LED_PIN);
}
