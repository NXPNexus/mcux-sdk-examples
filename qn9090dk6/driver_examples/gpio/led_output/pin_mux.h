/*
 * Copyright  2019 NXP
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

#define IOCON_PIO_DIGITAL_EN 0x80u     /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u          /*!<@brief Selects pin function 0 */
#define IOCON_PIO_FUNC2 0x02u          /*!<@brief Selects pin function 2 */
#define IOCON_PIO_INPFILT_OFF 0x0100u  /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u         /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_PULLUP 0x00u    /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u   /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW0_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SLEW1_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is disabled */
#define IOCON_PIO_SSEL_DI 0x00u        /*!<@brief SSEL is disabled */

/*! @name PIO0_3 (number 6), LED_RED
  @{ */
#define BOARD_INITPINS_LED_RED_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_LED_RED_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITPINS_LED_RED_PIN 3U    /*!<@brief 0U pin index: 3 */
                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4 */

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
