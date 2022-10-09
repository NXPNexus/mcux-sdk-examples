/*
 * Copyright  2019-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: K32W041AM
package_id: K32W041AMZ
mcu_data: ksdk2_0
processor_version: 0.8.0
pin_labels:
- {pin_num: '3', pin_signal: PIO0_0/USART0_SCK/USART1_TXD/PWM0/SPI1_SCK/PDM0_DATA, label: LED0, identifier: LED0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
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
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '15', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_12/IR_BLASTER/SWCLK/PWM0/I2C1_SCL/SPI0_MOSI/ANA_COMP_OUT, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '16', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_13/SPI1_SSELN2/SWDIO/PWM2/I2C1_SDA/SPI0_SSELN, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '12', peripheral: USART0, signal: RXD, pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '11', peripheral: USART0, signal: TXD, pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '21', peripheral: SPI1, signal: MOSI, pin_signal: PIO0_17/SPI1_MOSI/ISO7816_CLK/SWO/PWM6/CLK_OUT/SPIFI_IO3, mode: pullDown, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '18', peripheral: SPI1, signal: SCK, pin_signal: PIO0_15/SPI1_SCK/ANA_COMP_OUT/PWM3/I2C0_SCL/PDM1_DATA/RFRX, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '7', peripheral: SPI0, signal: MOSI, pin_signal: PIO0_4/SPI0_MOSI/USART0_CTS/PWM4/SPI1_SSELN1/ISO7816_IO/RFTX, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '5', peripheral: SPI0, signal: SCK, pin_signal: PIO0_2/SPI0_SCK/USART0_RXD/PWM2/SPI1_MOSI/ISO7816_RST/MCLK, mode: pullDown, slew0: standard, invert: disabled,
    filter_off: enabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '8', peripheral: SPI0, signal: SSELN, pin_signal: PIO0_5/SPI0_SSELN/USART0_RTS/SPI1_MISO/SPI1_SSELN2/RFRX, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '4', peripheral: SPI1, signal: MISO, pin_signal: PIO0_1/USART1_RXD/PWM1/SPI1_MISO/PDM0_CLK, mode: pullDown, slew0: standard, invert: disabled, filter_off: disabled,
    slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '6', peripheral: SPI1, signal: SSELN0, pin_signal: PIO0_3/SPI0_MISO/USART0_TXD/PWM3/SPI1_SSELN0/ISO7816_CLK, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '10', peripheral: SPI0, signal: MISO, pin_signal: PIO0_7/SPI0_MISO/USART0_CTS/CT32B1_MAT1/PWM7/I2C1_SDA/USART1_RXD/ADO, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin1_config = (/* Pin is configured as SPI1_MISO */
                                        IOCON_PIO_FUNC5 |
                                        /* Selects pull-down function */
                                        IOCON_PIO_MODE_PULLDOWN |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN1 (coords: 4) is configured as SPI1_MISO */
    IOCON_PinMuxSet(IOCON, 0U, 1U, port0_pin1_config);

    const uint32_t port0_pin12_config = (/* Pin is configured as SWCLK */
                                         IOCON_PIO_FUNC2 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN12 (coords: 15) is configured as SWCLK */
    IOCON_PinMuxSet(IOCON, 0U, 12U, port0_pin12_config);

    const uint32_t port0_pin13_config = (/* Pin is configured as SWDIO */
                                         IOCON_PIO_FUNC2 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN13 (coords: 16) is configured as SWDIO */
    IOCON_PinMuxSet(IOCON, 0U, 13U, port0_pin13_config);

    const uint32_t port0_pin15_config = (/* Pin is configured as SPI1_SCK */
                                         IOCON_PIO_FUNC1 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN15 (coords: 18) is configured as SPI1_SCK */
    IOCON_PinMuxSet(IOCON, 0U, 15U, port0_pin15_config);

    const uint32_t port0_pin17_config = (/* Pin is configured as SPI1_MOSI */
                                         IOCON_PIO_FUNC1 |
                                         /* Selects pull-down function */
                                         IOCON_PIO_MODE_PULLDOWN |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW0_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is disabled */
                                         IOCON_PIO_SLEW1_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* SSEL is disabled */
                                         IOCON_PIO_SSEL_DI);
    /* PORT0 PIN17 (coords: 21) is configured as SPI1_MOSI */
    IOCON_PinMuxSet(IOCON, 0U, 17U, port0_pin17_config);

    const uint32_t port0_pin2_config = (/* Pin is configured as SPI0_SCK */
                                        IOCON_PIO_FUNC1 |
                                        /* Selects pull-down function */
                                        IOCON_PIO_MODE_PULLDOWN |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter enabled */
                                        IOCON_PIO_INPFILT_ON |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN2 (coords: 5) is configured as SPI0_SCK */
    IOCON_PinMuxSet(IOCON, 0U, 2U, port0_pin2_config);

    const uint32_t port0_pin3_config = (/* Pin is configured as SPI1_SSELN0 */
                                        IOCON_PIO_FUNC5 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN3 (coords: 6) is configured as SPI1_SSELN0 */
    IOCON_PinMuxSet(IOCON, 0U, 3U, port0_pin3_config);

    const uint32_t port0_pin4_config = (/* Pin is configured as SPI0_MOSI */
                                        IOCON_PIO_FUNC1 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN4 (coords: 7) is configured as SPI0_MOSI */
    IOCON_PinMuxSet(IOCON, 0U, 4U, port0_pin4_config);

    const uint32_t port0_pin5_config = (/* Pin is configured as SPI0_SSELN */
                                        IOCON_PIO_FUNC1 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN5 (coords: 8) is configured as SPI0_SSELN */
    IOCON_PinMuxSet(IOCON, 0U, 5U, port0_pin5_config);

    const uint32_t port0_pin7_config = (/* Pin is configured as SPI0_MISO */
                                        IOCON_PIO_FUNC1 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN7 (coords: 10) is configured as SPI0_MISO */
    IOCON_PinMuxSet(IOCON, 0U, 7U, port0_pin7_config);

    const uint32_t port0_pin8_config = (/* Pin is configured as USART0_TXD */
                                        IOCON_PIO_FUNC2 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN8 (coords: 11) is configured as USART0_TXD */
    IOCON_PinMuxSet(IOCON, 0U, 8U, port0_pin8_config);

    const uint32_t port0_pin9_config = (/* Pin is configured as USART0_RXD */
                                        IOCON_PIO_FUNC2 |
                                        /* Selects pull-up function */
                                        IOCON_PIO_MODE_PULLUP |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW0_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is disabled */
                                        IOCON_PIO_SLEW1_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI |
                                        /* SSEL is disabled */
                                        IOCON_PIO_SSEL_DI);
    /* PORT0 PIN9 (coords: 12) is configured as USART0_RXD */
    IOCON_PinMuxSet(IOCON, 0U, 9U, port0_pin9_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
