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

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v5.0
processor: QN9090
package_id: QN9090HN
mcu_data: ksdk2_0
processor_version: 0.0.0
pin_labels:
- {pin_num: '6', pin_signal: PIO0_3/SPI0_MISO/USART0_TXD/PWM3/SPI1_SSELN0/ISO7816_CLK, label: LED1, identifier: LED1}
- {pin_num: '3', pin_signal: PIO0_0/USART0_SCK/USART1_TXD/PWM0/SPI1_SCK/PDM0_DATA, label: LED0, identifier: LED0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
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
  - {pin_num: '11', peripheral: USART0, signal: TXD, pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, mode: pullUp, invert: disabled,
    open_drain: disabled, filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
  - {pin_num: '12', peripheral: USART0, signal: RXD, pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, mode: pullUp, invert: disabled,
    open_drain: disabled, filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
  - {pin_num: '15', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_12/IR_BLASTER/SWCLK/PWM0/I2C1_SCL/SPI0_MOSI/ANA_COMP_OUT, mode: pullUp, invert: disabled, open_drain: disabled,
    filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
  - {pin_num: '16', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_13/SPI1_SSELN2/SWDIO/PWM2/I2C1_SDA/SPI0_SSELN, mode: pullUp, invert: disabled, open_drain: disabled,
    filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
  - {pin_num: '6', peripheral: GPIO, signal: 'PIO0, 3', pin_signal: PIO0_3/SPI0_MISO/USART0_TXD/PWM3/SPI1_SSELN0/ISO7816_CLK, direction: OUTPUT, gpio_init_state: 'false',
    mode: pullUp, invert: disabled, open_drain: disabled, filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
  - {pin_num: '3', peripheral: GPIO, signal: 'PIO0, 0', pin_signal: PIO0_0/USART0_SCK/USART1_TXD/PWM0/SPI1_SCK/PDM0_DATA, direction: OUTPUT, gpio_init_state: 'false',
    mode: pullUp, invert: disabled, open_drain: disabled, filter_off: disabled, slew_rate_0: standard, slew_rate_1: standard, ssel: disabled}
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
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t LED0_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_0 (pin 3)  */
    GPIO_PinInit(BOARD_INITPINS_LED0_GPIO, BOARD_INITPINS_LED0_PORT, BOARD_INITPINS_LED0_PIN, &LED0_config);

    gpio_pin_config_t LED1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_3 (pin 6)  */
    GPIO_PinInit(BOARD_INITPINS_LED1_GPIO, BOARD_INITPINS_LED1_PORT, BOARD_INITPINS_LED1_PIN, &LED1_config);

    const uint32_t LED0 = (/* Pin is configured as PIO0_0 */
                           IOCON_PIO_FUNC0 |
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
    /* PORT0 PIN0 (coords: 3) is configured as PIO0_0 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_LED0_PORT, BOARD_INITPINS_LED0_PIN, LED0);

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

    const uint32_t LED1 = (/* Pin is configured as PIO0_3 */
                           IOCON_PIO_FUNC0 |
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
    /* PORT0 PIN3 (coords: 6) is configured as PIO0_3 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_LED1_PORT, BOARD_INITPINS_LED1_PIN, LED1);

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
