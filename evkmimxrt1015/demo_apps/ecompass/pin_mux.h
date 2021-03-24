/*
 * Copyright 2019 NXP
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

/* GPIO_AD_B0_07 (number 68), LPUART1_RXD */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Device name: LPUART1 */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_06 (number 72), LPUART1_TXD */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Device name: LPUART1 */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< LPUART1 signal: TX */

/* GPIO_AD_B1_14 (number 53), I2C1_SCL/U10[17]/J18[6]/U26[4] */
#define BOARD_I2C1_SCL_PERIPHERAL                                         LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_I2C1_SCL_SIGNAL                                                SCL   /*!< LPI2C1 signal: SCL */

/* GPIO_AD_B1_15 (number 52), I2C1_SDA/U10[18]/J18[5]/J19[9]/U26[6] */
#define BOARD_I2C1_SDA_PERIPHERAL                                         LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_I2C1_SDA_SIGNAL                                                SDA   /*!< LPI2C1 signal: SDA */

/* GPIO_SD_B1_01 (number 21), GPIO SD_B1_01 */
#define BOARD_USER_LED_GPIO                                                GPIO3   /*!< GPIO device name: GPIO3 */
#define BOARD_USER_LED_PORT                                                GPIO3   /*!< PORT device name: GPIO3 */
#define BOARD_USER_LED_PIN                                                   21U   /*!< GPIO3 pin index: 21 */


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
