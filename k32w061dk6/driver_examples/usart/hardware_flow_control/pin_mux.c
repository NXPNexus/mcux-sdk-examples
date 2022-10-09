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

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: K32W061
package_id: K32W061HN
mcu_data: ksdk2_0
processor_version: 0.8.2
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
  - {pin_num: '14', peripheral: USART1, signal: RXD, pin_signal: PIO0_11/CT32B1_CAP0/USART1_RXD/RFRX/I2C0_SDA/SPI0_MISO/PDM0_CLK, egp: gpio, ecs: disabled, ehs: low,
    invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
  - {pin_num: '13', peripheral: USART1, signal: TXD, pin_signal: PIO0_10/CT32B0_CAP0/USART1_TXD/RFTX/I2C0_SCL/SPI0_SCK/PDM0_DATA, egp: gpio, ecs: disabled, ehs: low,
    invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
  - {pin_num: '5', peripheral: USART0, signal: RXD, pin_signal: PIO0_2/SPI0_SCK/USART0_RXD/PWM2/SPI1_MOSI/ISO7816_RST/MCLK, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '6', peripheral: USART0, signal: TXD, pin_signal: PIO0_3/SPI0_MISO/USART0_TXD/PWM3/SPI1_SSELN0/ISO7816_CLK, mode: pullUp, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '10', peripheral: USART0, signal: CTS, pin_signal: PIO0_7/SPI0_MISO/USART0_CTS/CT32B1_MAT1/PWM7/I2C1_SDA/USART1_RXD/ADO, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '9', peripheral: USART0, signal: RTS, pin_signal: PIO0_6/SPI0_SCK/USART0_RTS/CT32B1_MAT0/PWM6/I2C1_SCL/USART1_TXD/ADE, mode: pullUp, slew0: standard,
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

    const uint32_t port0_pin10_config = (/* Pin is configured as USART1_TXD */
                                         IOCON_PIO_FUNC2 |
                                         /* GPIO mode */
                                         IOCON_PIO_EGP_GPIO |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* High speed IO for GPIO mode, IIC not */
                                         IOCON_PIO_EHS_DI |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IIC mode:Noise pulses below approximately 50ns are filtered out. GPIO mode:a 3ns filter */
                                         IOCON_PIO_FSEL_DI |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* IO_CLAMP disabled */
                                         IOCON_PIO_IO_CLAMP_DI);
    /* PORT0 PIN10 (coords: 13) is configured as USART1_TXD */
    IOCON_PinMuxSet(IOCON, 0U, 10U, port0_pin10_config);

    const uint32_t port0_pin11_config = (/* Pin is configured as USART1_RXD */
                                         IOCON_PIO_FUNC2 |
                                         /* GPIO mode */
                                         IOCON_PIO_EGP_GPIO |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* High speed IO for GPIO mode, IIC not */
                                         IOCON_PIO_EHS_DI |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IIC mode:Noise pulses below approximately 50ns are filtered out. GPIO mode:a 3ns filter */
                                         IOCON_PIO_FSEL_DI |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* IO_CLAMP disabled */
                                         IOCON_PIO_IO_CLAMP_DI);
    /* PORT0 PIN11 (coords: 14) is configured as USART1_RXD */
    IOCON_PinMuxSet(IOCON, 0U, 11U, port0_pin11_config);

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

    const uint32_t port0_pin2_config = (/* Pin is configured as USART0_RXD */
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
    /* PORT0 PIN2 (coords: 5) is configured as USART0_RXD */
    IOCON_PinMuxSet(IOCON, 0U, 2U, port0_pin2_config);

    const uint32_t port0_pin3_config = (/* Pin is configured as USART0_TXD */
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
    /* PORT0 PIN3 (coords: 6) is configured as USART0_TXD */
    IOCON_PinMuxSet(IOCON, 0U, 3U, port0_pin3_config);

    const uint32_t port0_pin6_config = (/* Pin is configured as USART0_RTS */
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
    /* PORT0 PIN6 (coords: 9) is configured as USART0_RTS */
    IOCON_PinMuxSet(IOCON, 0U, 6U, port0_pin6_config);

    const uint32_t port0_pin7_config = (/* Pin is configured as USART0_CTS */
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
    /* PORT0 PIN7 (coords: 10) is configured as USART0_CTS */
    IOCON_PinMuxSet(IOCON, 0U, 7U, port0_pin7_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
