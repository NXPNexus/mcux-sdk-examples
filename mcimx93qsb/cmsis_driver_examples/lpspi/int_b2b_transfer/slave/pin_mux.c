/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v13.0
processor: MIMX9322xxxxM
package_id: MIMX9322CVXXM
mcu_data: ksdk2_0
processor_version: 0.13.6
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
    LPSPI3_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: D14, peripheral: LPUART2, signal: lpuart_rx, pin_signal: UART2_RXD, PD: ENABLED, FSEL1: SlOW_SLEW_RATE, DSE: NO_DRIVE}
  - {pin_num: D12, peripheral: LPUART2, signal: lpuart_tx, pin_signal: UART2_TXD, PD: DISABLED, FSEL1: SlOW_SLEW_RATE}
  - {pin_num: B11, peripheral: LPI2C2, signal: lpi2c_sda, pin_signal: I2C2_SDA, SION: ENABLED, OD: ENABLED, PD: DISABLED}
  - {pin_num: A11, peripheral: LPI2C2, signal: lpi2c_scl, pin_signal: I2C2_SCL, SION: ENABLED, OD: ENABLED, PD: DISABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PAD_I2C2_SCL__LPI2C2_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_I2C2_SCL__LPI2C2_SCL, 
                        IOMUXC_PAD_DSE(15U) |
                        IOMUXC_PAD_FSEL1(2U) |
                        IOMUXC_PAD_OD_MASK);
    IOMUXC_SetPinMux(IOMUXC_PAD_I2C2_SDA__LPI2C2_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_I2C2_SDA__LPI2C2_SDA, 
                        IOMUXC_PAD_DSE(15U) |
                        IOMUXC_PAD_FSEL1(2U) |
                        IOMUXC_PAD_OD_MASK);
    IOMUXC_SetPinMux(IOMUXC_PAD_UART2_RXD__LPUART2_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_UART2_RXD__LPUART2_RX, 
                        IOMUXC_PAD_PD_MASK);
    IOMUXC_SetPinMux(IOMUXC_PAD_UART2_TXD__LPUART2_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PAD_UART2_TXD__LPUART2_TX, 
                        IOMUXC_PAD_DSE(15U));
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPSPI3_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: K14, peripheral: LPSPI3, signal: 'lpspi_pcs, 0', pin_signal: GPIO_IO08}
  - {pin_num: G16, peripheral: LPSPI3, signal: lpspi_sck, pin_signal: GPIO_IO11}
  - {pin_num: F16, peripheral: LPSPI3, signal: lpspi_sin, pin_signal: GPIO_IO09}
  - {pin_num: F17, peripheral: LPSPI3, signal: lpspi_sout, pin_signal: GPIO_IO10}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPSPI3_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPSPI3_InitPins(void) {                               /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO08__LPSPI3_PCS0, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO09__LPSPI3_SIN, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO10__LPSPI3_SOUT, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO11__LPSPI3_SCK, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPSPI3_DeinitPins:
- options: {callFromInitBoot: 'false', coreID: cm33}
- pin_list:
  - {pin_num: K14, peripheral: GPIO2, signal: 'gpio_io, 08', pin_signal: GPIO_IO08}
  - {pin_num: F16, peripheral: GPIO2, signal: 'gpio_io, 09', pin_signal: GPIO_IO09}
  - {pin_num: F17, peripheral: GPIO2, signal: 'gpio_io, 10', pin_signal: GPIO_IO10}
  - {pin_num: G16, peripheral: GPIO2, signal: 'gpio_io, 11', pin_signal: GPIO_IO11}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPSPI3_DeinitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPSPI3_DeinitPins(void) {                             /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO08__GPIO2_IO08, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO09__GPIO2_IO09, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO10__GPIO2_IO10, 0U);
    IOMUXC_SetPinMux(IOMUXC_PAD_GPIO_IO11__GPIO2_IO11, 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
