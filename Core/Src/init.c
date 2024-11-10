#include "init.h"
#include "stdint.h"

void init(void) {
    RCC_GPIO_EN |= RCC_GPIOB_EN;
    GPIOB_MODER |= GPIO_MODER_PIN7;
    GPIOB_OTYPER |= GPIO_OTYPER_PP;
    
}