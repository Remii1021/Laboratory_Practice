#pragma once

//RCC Registers
#define RCC_GPIO_EN (*(uint32_t*)(0x40023800UL+0x30UL))
#define RCC_GPIOA_EN 0X01UL
#define RCC_GPIOB_EN 0x02UL
#define RCC_GPIOC_EN 0x04UL
#define RCC_GPIOD_EN 0x08UL
#define RCC_GPIOE_EN 0x10UL

//GPIO Addresses
#define GPIOA_ADDRESS 0x40020000UL
#define GPIOB_ADDRESS 0x40020400UL
#define GPIOC_ADDRESS 0x40020800UL
#define GPIOD_ADDRESS 0x40020C00UL
#define GPIOE_ADDRESS 0x40021000UL

//GPIO Registers
#define GPIOB_MODER (*(uint32_t*)(GPIOB_ADDRESS+0x00UL))
#define GPIOB_OTYPER (*(uint32_t*)(GPIOB_ADDRESS+0x04UL))
#define GPIOB_OSPEEDR (*(uint32_t*)(GPIOB_ADDRESS+0x08UL)
#define GPIOB_PUPDR (*(uint32_t*)(GPIOB_ADDRESS+0x0CUL))
#define GPIOB_IDR (*(uint32_t*)(GPIOB_ADDRESS+0x10UL))
#define GPIOB_ODR (*(uint32_t*)(GPIOB_ADDRESS + 0x14UL))
#define GPIOB_BSRR (*(uint32_t*)(GPIOB_ADDRESS + 0x18UL))

//GPIO Pin 7 addresses
#define GPIO_MODER_PIN7 0x4000UL //(1 << 15)
#define GPIO_OTYPER_PP 0x00UL;
#define GPIO_OSPEEDR_PIN7 0x4000UL //(1 << 15) Medium speed
#define GPIO_PUPDR_PIN7 0x00UL //No Pull up/Pull down resistor
#define GPIO_IDR_PIN7 0x80UL
#define GPIO_ODR_PIN7 0x80UL
#define GPIO_BSSR_PIN7_SET 0x80
#define GPIO_BSSR_PIN7_RESET 0x800000
