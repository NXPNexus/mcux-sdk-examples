/*
 * Copyright 2018 NXP
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

/*! @name PORTB1 (number 26), UART0_TX_TGTMCU
  @{ */
#define BOARD_DEBUG_UART_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_TX_PIN 1U     /*!<@brief PORTB pin index: 1 */
                                       /* @} */

/*! @name PORTB0 (number 27), UART0_RX_TGTMCU
  @{ */
#define BOARD_DEBUG_UART_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_RX_PIN 0U     /*!<@brief PORTB pin index: 0 */
                                       /* @} */

/*! @name PORTE6 (number 41), J1[3]/J1[16]/U14[3]/Arduino_D7/FXOS_RST/MC_ENC_I
  @{ */
#define BOARD_ACCEL_RST_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_ACCEL_RST_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_ACCEL_RST_PIN 6U     /*!<@brief PORTE pin index: 6 */
                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTA3 (number 35), J2[20]/U12[2]/FXOS_SCL/Arduino_D15
  @{ */
#define BOARD_ACCEL_SCL_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_ACCEL_SCL_PIN 3U     /*!<@brief PORTA pin index: 3 */
                                   /* @} */

/*! @name PORTA2 (number 36), J2[18]/U12[3]/FXOS_SDA/Arduino_D14
  @{ */
#define BOARD_ACCEL_SDA_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_ACCEL_SDA_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_I2C_ConfigurePins(void);

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
