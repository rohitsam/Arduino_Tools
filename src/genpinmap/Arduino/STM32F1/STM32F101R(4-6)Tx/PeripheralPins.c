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
 * Automatically generated from STM32F101R(4-6)Tx.xml
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
  {PA_0,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC1_IN0
  {PA_1,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1
  {PA_2,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2
  {PA_3,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3
  {PA_4,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4
  {PA_5,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
  {PA_6,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
  {PA_7,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7
  {PB_0,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8
  {PB_1,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9
  {PC_0,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10
  {PC_1,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_IN11
  {PC_2,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC1_IN12
  {PC_3,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC1_IN13
  {PC_4,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14
  {PC_5,       ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC1_IN15
  {NC,         NP,    0}
};
#endif

//*** No DAC ***

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PB_7,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, AFIO_NONE)},
  {PB_9,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, AFIO_I2C1_ENABLE)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PB_6,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, AFIO_NONE)},
  {PB_8,       I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, AFIO_I2C1_ENABLE)},
  {NC,         NP,    0}
};
#endif

//*** PWM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_PWM[] = {
  {PA_0,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 1, 0)}, // TIM2_CH1
  {PA_0,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_2, 1, 0)}, // TIM2_CH1
  {PA_1,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 2, 0)}, // TIM2_CH2
  {PA_1,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_2, 2, 0)}, // TIM2_CH2
  {PA_2,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 3, 0)}, // TIM2_CH3
  {PA_2,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_1, 3, 0)}, // TIM2_CH3
  {PA_3,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 4, 0)}, // TIM2_CH4
  {PA_3,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_1, 4, 0)}, // TIM2_CH4
  {PA_6,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 1, 0)}, // TIM3_CH1
  {PA_7,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 2, 0)}, // TIM3_CH2
  {PA_15,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_1, 1, 0)}, // TIM2_CH1
  {PA_15,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_ENABLE, 1, 0)}, // TIM2_CH1
  {PB_0,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 3, 0)}, // TIM3_CH3
  {PB_0,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_PARTIAL, 3, 0)}, // TIM3_CH3
  {PB_1,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE, 4, 0)}, // TIM3_CH4
  {PB_1,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_PARTIAL, 4, 0)}, // TIM3_CH4
  {PB_3,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_1, 2, 0)}, // TIM2_CH2
  {PB_3,       TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_ENABLE, 2, 0)}, // TIM2_CH2
  {PB_4,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_PARTIAL, 1, 0)}, // TIM3_CH1
  {PB_5,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_PARTIAL, 2, 0)}, // TIM3_CH2
  {PB_10,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_2, 3, 0)}, // TIM2_CH3
  {PB_10,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_ENABLE, 3, 0)}, // TIM2_CH3
  {PB_11,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_PARTIAL_2, 4, 0)}, // TIM2_CH4
  {PB_11,      TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM2_ENABLE, 4, 0)}, // TIM2_CH4
  {PC_6,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_ENABLE, 1, 0)}, // TIM3_CH1
  {PC_7,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_ENABLE, 2, 0)}, // TIM3_CH2
  {PC_8,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_ENABLE, 3, 0)}, // TIM3_CH3
  {PC_9,       TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_TIM3_ENABLE, 4, 0)}, // TIM3_CH4
  {NC,         NP,    0}
};
#endif

//*** SERIAL ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_2,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PA_9,       USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PB_6,       USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_USART1_ENABLE)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_3,       USART2,  STM_PIN_DATA(STM_MODE_INPUT, GPIO_PULLUP, AFIO_NONE)},
  {PA_10,      USART1,  STM_PIN_DATA(STM_MODE_INPUT, GPIO_PULLUP, AFIO_NONE)},
  {PB_7,       USART1,  STM_PIN_DATA(STM_MODE_INPUT, GPIO_PULLUP, AFIO_USART1_ENABLE)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PA_12,      USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {NC,         NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PA_11,      USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {NC,         NP,    0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PB_5,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_SPI1_ENABLE)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PB_4,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_SPI1_ENABLE)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PB_3,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_SPI1_ENABLE)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_NONE)},
  {PA_15,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, AFIO_SPI1_ENABLE)},
  {NC,    NP,    0}
};
#endif

//*** No CAN ***

//*** No ETHERNET ***

//*** No QUADSPI ***

//*** No USB ***

//*** No SD ***
