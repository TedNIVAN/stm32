#define BOARD_NAME "Black Pill"
/* https://wiki.stm32duino.com/index.php?title=Black_Pill */
/* echo -n "Black Pill" | shasum -a 256 | sed -e 's/^.*\(........\)  -$/\1/' */
#define BOARD_ID    0xc7c1f677

#define STM32F10X_MD		/* Medium-density device */

#define STM32_PLLXTPRE                  STM32_PLLXTPRE_DIV1
#define STM32_PLLMUL_VALUE              9
#define STM32_HSECLK                    8000000

#define GPIO_LED_BASE   GPIOB_BASE
#define GPIO_LED_CLEAR_TO_EMIT          12
#define GPIO_USB_BASE   GPIOA_BASE
#define GPIO_USB_SET_TO_ENABLE          12
#undef  GPIO_OTHER_BASE

/*
 * Port A setup.
 * PA11 - Push Pull output 10MHz 0 default (until USB enabled) (USBDM)
 * PA12 - Push Pull output 10MHz 0 default (until USB enabled) (USBDP)
 * PB12 - Push pull output 50MHz (LED 1:ON 0:OFF)
 * ------------------------ Default
 * PAx  - input with pull-up
 * PBx  - input with pull-up
 */
#define VAL_GPIO_USB_ODR            0xFFFFE7FF
#define VAL_GPIO_USB_CRL            0x88888888      /*  PA7...PA0 */
#define VAL_GPIO_USB_CRH            0x88811888      /* PA15...PA8 */

#define VAL_GPIO_LED_ODR            0xFFFFFFFF
#define VAL_GPIO_LED_CRL            0x88888888      /*  PB7...PB0 */
#define VAL_GPIO_LED_CRH            0x88838888      /* PB15...PB8 */

#define RCC_ENR_IOP_EN      (RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN)
#define RCC_RSTR_IOP_RST    (RCC_APB2RSTR_IOPARST | RCC_APB2RSTR_IOPBRST)
