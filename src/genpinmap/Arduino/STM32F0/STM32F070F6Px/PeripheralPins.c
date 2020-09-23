/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 * Automatically generated from STM32F070F6Px.xml
 */
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT0, 128);). These pins are not available thanks
 *   pin number (Dx or x).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
  {PA_1,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
  {PA_2,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2
  {PA_3,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3
  {PA_4,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
  {PA_5,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5
  {PA_6,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6
  {PA_7,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7
  {PB_1,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9
  {NC,         NP,    0}
};
#endif

//*** No DAC ***

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PA_10,      I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PF_0,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PA_9,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PA_11_ALTR, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C1)},
  {PF_1,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,         NP,    0}
};
#endif

//*** PWM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_PWM[] = {
  {PA_4,       TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
  {PA_6,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 1, 0)}, // TIM3_CH1
  {PA_6_ALT0,  TIM16,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM16, 1, 0)}, // TIM16_CH1
  {PA_7,       TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_7_ALT0,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 2, 0)}, // TIM3_CH2
  {PA_7_ALT1,  TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
  {PA_7_ALT2,  TIM17,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM17, 1, 0)}, // TIM17_CH1
  {PA_9,       TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 0)}, // TIM1_CH2
  {PA_10,      TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 0)}, // TIM1_CH3
  {PA_11_ALTR, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 4, 0)}, // TIM1_CH4
  {PB_1,       TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_1_ALT0,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 4, 0)}, // TIM3_CH4
  {PB_1_ALT1,  TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM14, 1, 0)}, // TIM14_CH1
  {NC,         NP,    0}
};
#endif

//*** SERIAL ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_2,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_9,       USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {PA_14,      USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_3,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_10,      USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_12_ALTR, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_11_ALTR, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {NC,         NP,    0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,    0}
};
#endif

//*** No CAN ***

//*** No ETHERNET ***

//*** No QUADSPI ***

//*** USB ***

#ifdef HAL_PCD_MODULE_ENABLED
WEAK const PinMap PinMap_USB[] = {
  {PA_4,  USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_USB)}, // USB_NOE
  {PA_11_ALTR,USB, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF_NONE)}, // USB_DM
  {PA_12_ALTR,USB, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF_NONE)}, // USB_DP
  {PA_13, USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_USB)}, // USB_NOE
  {NC,    NP,    0}
};
#endif

//*** No USB_OTG_FS ***

//*** No USB_OTG_HS ***

//*** No SD ***
