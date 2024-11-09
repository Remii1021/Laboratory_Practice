#include "init.h"
#include "stdint.h"

void init(void) {
    RCC_GPIO_EN |= RCC_GPIOB_EN;
    
}