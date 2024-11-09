#pragma once

//RCC Registers
#define RCC_GPIO_EN (*(uint32_t*)(0x40023800UL+0x30UL))
#define RCC_GPIOA_EN 0X01UL
#define RCC_GPIOB_EN 0x02UL
#define RCC_GPIOC_EN 0x04UL
#define RCC_GPIOD_EN 0x08UL
#define RCC_GPIOE_EN 0x10UL

//GPIO Addresses
#define GPIOB_ADR 0x40020400UL

//GPIO Registers
#define GPIOB_MODER (*(uint32_t*)(GPIO_ADR+0x00UL))
#define GPIOB_OTYPER (*(uint32_t*)(0x40020400UL+0x04UL))
#define GPIOB_OSPEEDR (*(uint32_t*)(0x40020400UL+0x08UL)
#define GPIOB_PUPDR (*(uint32_t*)(0x40020400UL+0x0CUL))
#define GPIOB_IDR (*(uint32_t*)(0x40020400UL+0x10UL))
#define GPIOB_ODR (*(uint32_t*)(0x40020400UL + 0x14UL))
#define GPIOB_BSRR (*(uint32_t*)(0x40020400UL + 0x18UL))


#define GPIO_MODER_PIN7 0x4000UL //(1 << 15)
#define GPIO_OTYPER_PP 0x00UL;
#define GPIO_OSPEEDR_PIN7 0x4000UL //(1 << 15) Medium speed
#define GPIO_PUPDR_PIN7 0x00UL //No Pull up/Pull down resistor
#define GPIO_IDR_PIN7 0x80UL
#define GPIO_ODR_PIN7 0x80UL
#define GPIO_BSSR_PIN7_SET 0x80
#define GPIO_BSSR_PIN7_RESET 0x800000