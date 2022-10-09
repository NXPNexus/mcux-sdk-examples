/*
* Copyright 2020 NXP
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

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4 */

/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x80u
/*!
 * @brief IO is an open drain cell */
#define IOCON_PIO_ECS_DI 0x00u
/*!
 * @brief GPIO mode */
#define IOCON_PIO_EGP_GPIO 0x08u
/*!
 * @brief High speed IO for GPIO mode, IIC not */
#define IOCON_PIO_EHS_DI 0x00u
/*!
 * @brief IIC mode:Noise pulses below approximately 50ns are filtered out. GPIO mode:a 3ns filter */
#define IOCON_PIO_FSEL_DI 0x00u
/*!
 * @brief Selects pin function 2 */
#define IOCON_PIO_FUNC2 0x02u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x0100u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief IO_CLAMP disabled */
#define IOCON_PIO_IO_CLAMP_DI 0x00u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u

/*! @name USART1_TXD (number 13), DBG_UART_TX
  @{ */
/* @} */

/*! @name USART1_RXD (number 14), DBG_UART_RX
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDebugUARTPins(void); /* Function assigned for the Cortex-M4 */

/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x80u
/*!
 * @brief IO is an open drain cell */
#define IOCON_PIO_ECS_DI 0x00u
/*!
 * @brief GPIO mode */
#define IOCON_PIO_EGP_GPIO 0x08u
/*!
 * @brief High speed IO for GPIO mode, IIC not */
#define IOCON_PIO_EHS_DI 0x00u
/*!
 * @brief IIC mode:Noise pulses below approximately 50ns are filtered out. GPIO mode:a 3ns filter */
#define IOCON_PIO_FSEL_DI 0x00u
/*!
 * @brief Selects pin function 0 */
#define IOCON_PIO_FUNC0 0x00u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x0100u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief IO_CLAMP disabled */
#define IOCON_PIO_IO_CLAMP_DI 0x00u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u

/*! @name PIO0_10 (number 13), DBG_UART_TX
  @{ */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PIN 10U   /*!<@brief 0U pin index: 10 */
                                                        /* @} */

/*! @name PIO0_11 (number 14), DBG_UART_RX
  @{ */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PIN 11U   /*!<@brief 0U pin index: 11 */
                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_DeInitDebugUARTPins(void); /* Function assigned for the Cortex-M4 */

#define IOCON_PIO_DIGITAL_EN 0x80u     /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC2 0x02u          /*!<@brief Selects pin function 2 */
#define IOCON_PIO_INPFILT_OFF 0x0100u  /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u         /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x00u    /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u   /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW0_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SLEW1_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SSEL_DI 0x00u        /*!<@brief SSEL is disabled */

/*! @name USART0_TXD (number 11), APP_UART_TX
  @{ */
/* @} */

/*! @name USART0_RXD (number 12), APP_UART_RX
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitAppUARTPins(void); /* Function assigned for the Cortex-M4 */

#define IOCON_PIO_DIGITAL_EN 0x80u     /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u          /*!<@brief Selects pin function 0 */
#define IOCON_PIO_INPFILT_OFF 0x0100u  /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u         /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x00u    /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u   /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW0_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SLEW1_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SSEL_DI 0x00u        /*!<@brief SSEL is disabled */

/*! @name PIO0_8 (number 11), APP_UART_TX
  @{ */
#define BOARD_DEINITAPPUARTPINS_APP_UART_TX_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_DEINITAPPUARTPINS_APP_UART_TX_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_DEINITAPPUARTPINS_APP_UART_TX_PIN 8U    /*!<@brief 0U pin index: 8 */
                                                      /* @} */

/*! @name PIO0_9 (number 12), APP_UART_RX
  @{ */
#define BOARD_DEINITAPPUARTPINS_APP_UART_RX_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_DEINITAPPUARTPINS_APP_UART_RX_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_DEINITAPPUARTPINS_APP_UART_RX_PIN 9U    /*!<@brief 0U pin index: 9 */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_DeInitAppUARTPins(void); /* Function assigned for the Cortex-M4 */

#define IOCON_PIO_DIGITAL_EN 0x80u    /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC7 0x07u         /*!<@brief Selects pin function 7 */
#define IOCON_PIO_INPFILT_OFF 0x0100u /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x10u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x00u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW0_FAST 0x20u    /*!<@brief Fast mode, slew rate control is enabled */
#define IOCON_PIO_SLEW1_FAST 0x0200u  /*!<@brief Fast mode, slew rate control is enabled */
#define IOCON_PIO_SSEL_DI 0x00u       /*!<@brief SSEL is disabled */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSPIFIPins(void); /* Function assigned for the Cortex-M4 */

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

