/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

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

#define SOPT5_UART1TXSRC_UART_TX 0x00u /*!<@brief UART 1 transmit data source select: UART1_TX pin */

/*! @name PORTE1 (number 2), J2[20]/UART1_RX_TGTMCU
  @{ */
#define BOARD_DEBUG_UART_RX_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_DEBUG_UART_RX_PIN 1U     /*!<@brief PORTE pin index: 1 */
                                       /* @} */

/*! @name PORTC1 (number 44), J24[6]/LLWU_P6/ADC0_SE15/PUSH_BUTTON2
  @{ */
#define BOARD_SW2_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_SW2_PIN 1U     /*!<@brief PORTC pin index: 1 */
                             /* @} */

/*! @name PORTC3 (number 46), J1[14]
  @{ */
#define BOARD_CLKOUT_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_CLKOUT_PIN 3U     /*!<@brief PORTC pin index: 3 */
                                /* @} */

/*! @name PORTC4 (number 49), J8[P2]/J24[9]/uSD_card_CS
  @{ */
#define BOARD_SD_CARD_DAT3_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_SD_CARD_DAT3_PIN 4U     /*!<@brief PORTC pin index: 4 */
                                      /* @} */

/*! @name PORTD4 (number 61), J2[6]/SPI0_PCS1/LLWU_P14
  @{ */
#define BOARD_RF_CS_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_RF_CS_PIN 4U     /*!<@brief PORTD pin index: 4 */
                               /* @} */

/*! @name PORTD5 (number 62), J2[12]/BLUE_LED
  @{ */
#define BOARD_LEDRGB_BLUE_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_LEDRGB_BLUE_PIN 5U     /*!<@brief PORTD pin index: 5 */
                                     /* @} */

/*! @name PORTA2 (number 24), J1[8]/GREEN_LED
  @{ */
#define BOARD_LEDRGB_GREEN_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LEDRGB_GREEN_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                      /* @} */

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
