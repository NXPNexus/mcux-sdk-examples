/*
 * Copyright 2018-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_09 (number 3), LPUART1_RXD */
#define BOARD_LPUART1_RXD_PERIPHERAL                                     LPUART1   /*!< Device name: LPUART1 */
#define BOARD_LPUART1_RXD_SIGNAL                                             RXD   /*!< LPUART1 signal: RXD */

/* GPIO_10 (number 2), LPUART1_TXD */
#define BOARD_LPUART1_TXD_PERIPHERAL                                     LPUART1   /*!< Device name: LPUART1 */
#define BOARD_LPUART1_TXD_SIGNAL                                             TXD   /*!< LPUART1 signal: TXD */

/* GPIO_02 (number 11), I2C1_SCL/U10[17]/J57[20]/U26[4] */
#define BOARD_I2C1_SCL_PERIPHERAL                                         LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_I2C1_SCL_SIGNAL                                                SCL   /*!< LPI2C1 signal: SCL */

/* GPIO_01 (number 12), I2C1_SDA/U10[18]/J57[18]/U26[6] */
#define BOARD_I2C1_SDA_PERIPHERAL                                         LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_I2C1_SDA_SIGNAL                                                SDA   /*!< LPI2C1 signal: SDA */

/* GPIO_11 (number 1), GPIO_11 */
#define BOARD_GPIO_11_PERIPHERAL                                           GPIO1   /*!< Device name: GPIO1 */
#define BOARD_GPIO_11_SIGNAL                                          gpiomux_io   /*!< GPIO1 signal: gpiomux_io */
#define BOARD_GPIO_11_CHANNEL                                                11U   /*!< GPIO1 gpiomux_io channel: 11 */

/* GPIO_AD_09 (number 48), ADC12_4/JTAG_TDO/J55[6]/J26[4] */
#define BOARD_ADC12_4_PERIPHERAL                                             ARM   /*!< Device name: ARM */
#define BOARD_ADC12_4_SIGNAL                                       arm_trace_swo   /*!< ARM signal: arm_trace_swo */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
