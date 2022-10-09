/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v10.0
processor: K32W041AM
package_id: K32W041AMZ
mcu_data: ksdk2_0
processor_version: 10.0.0
pin_labels:
- {pin_num: '13', pin_signal: PIO0_10/CT32B0_CAP0/USART1_TXD/RFTX/I2C0_SCL/SPI0_SCK/PDM0_DATA, label: DBG_UART_TX, identifier: DBG_UART_TX}
- {pin_num: '14', pin_signal: PIO0_11/CT32B1_CAP0/USART1_RXD/RFRX/I2C0_SDA/SPI0_MISO/PDM0_CLK, label: DBG_UART_RX, identifier: DBG_UART_RX}
- {pin_num: '11', pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, label: APP_UART_TX, identifier: APP_UART_TX}
- {pin_num: '12', pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, label: APP_UART_RX, identifier: APP_UART_RX}
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
- pin_list: []
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
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDebugUARTPins:
- options: {callFromInitBoot: 'false', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '13', peripheral: USART1, signal: TXD, pin_signal: PIO0_10/CT32B0_CAP0/USART1_TXD/RFTX/I2C0_SCL/SPI0_SCK/PDM0_DATA, egp: gpio, ecs: disabled, ehs: low,
    invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
  - {pin_num: '14', peripheral: USART1, signal: RXD, pin_signal: PIO0_11/CT32B1_CAP0/USART1_RXD/RFRX/I2C0_SDA/SPI0_MISO/PDM0_CLK, egp: gpio, ecs: disabled, ehs: low,
    invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDebugUARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_InitDebugUARTPins(void)
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
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_DeInitDebugUARTPins:
- options: {callFromInitBoot: 'false', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '13', peripheral: GPIO, signal: 'PIO0, 10', pin_signal: PIO0_10/CT32B0_CAP0/USART1_TXD/RFTX/I2C0_SCL/SPI0_SCK/PDM0_DATA, direction: INPUT, egp: gpio,
    ecs: disabled, ehs: low, invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
  - {pin_num: '14', peripheral: GPIO, signal: 'PIO0, 11', pin_signal: PIO0_11/CT32B1_CAP0/USART1_RXD/RFRX/I2C0_SDA/SPI0_MISO/PDM0_CLK, direction: INPUT, egp: gpio,
    ecs: disabled, ehs: low, invert: disabled, filter_off: disabled, fsel: Below_50ns, open_drain: disabled, io_clamp: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_DeInitDebugUARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_DeInitDebugUARTPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t DBG_UART_TX_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_10 (pin 13)  */
    GPIO_PinInit(BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_GPIO, BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PORT, BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PIN, &DBG_UART_TX_config);

    gpio_pin_config_t DBG_UART_RX_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_11 (pin 14)  */
    GPIO_PinInit(BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_GPIO, BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PORT, BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PIN, &DBG_UART_RX_config);

    const uint32_t DBG_UART_TX = (/* Pin is configured as PIO0_10 */
                                  IOCON_PIO_FUNC0 |
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
    /* PORT0 PIN10 (coords: 13) is configured as PIO0_10 */
    IOCON_PinMuxSet(IOCON, BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PORT, BOARD_DEINITDEBUGUARTPINS_DBG_UART_TX_PIN, DBG_UART_TX);

    const uint32_t DBG_UART_RX = (/* Pin is configured as PIO0_11 */
                                  IOCON_PIO_FUNC0 |
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
    /* PORT0 PIN11 (coords: 14) is configured as PIO0_11 */
    IOCON_PinMuxSet(IOCON, BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PORT, BOARD_DEINITDEBUGUARTPINS_DBG_UART_RX_PIN, DBG_UART_RX);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSWDPins:
- options: {callFromInitBoot: 'false', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '15', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_12/IR_BLASTER/SWCLK/PWM0/I2C1_SCL/SPI0_MOSI/ANA_COMP_OUT, mode: inactive, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '16', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_13/SPI1_SSELN2/SWDIO/PWM2/I2C1_SDA/SPI0_SSELN, mode: inactive, slew0: standard, invert: disabled,
    filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSWDPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_InitSWDPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin12_config = (/* Pin is configured as SWCLK */
                                         IOCON_PIO_FUNC2 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
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
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
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
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitAppUARTPins:
- options: {callFromInitBoot: 'false', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: USART0, signal: TXD, pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '12', peripheral: USART0, signal: RXD, pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, mode: pullUp, slew0: standard,
    invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitAppUARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_InitAppUARTPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

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

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_DeInitAppUARTPins:
- options: {callFromInitBoot: 'false', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: GPIO, signal: 'PIO0, 8', pin_signal: PIO0_8/SPI0_MOSI/USART0_TXD/CT32B0_MAT0/PWM8/ANA_COMP_OUT/RFTX/PDM1_DATA, direction: INPUT, mode: pullUp,
    slew0: standard, invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
  - {pin_num: '12', peripheral: GPIO, signal: 'PIO0, 9', pin_signal: PIO0_9/SPI0_SSELN/USART0_RXD/CT32B1_CAP1/PWM9/USART1_SCK/ADO/PDM1_CLK, direction: INPUT, mode: pullUp,
    slew0: standard, invert: disabled, filter_off: disabled, slew1: standard, open_drain: disabled, ssel: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_DeInitAppUARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4 */
void BOARD_DeInitAppUARTPins(void)
{
    /* Enables the clock for the I/O controller block. 0: Disable. 1: Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t APP_UART_TX_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_8 (pin 11)  */
    GPIO_PinInit(BOARD_DEINITAPPUARTPINS_APP_UART_TX_GPIO, BOARD_DEINITAPPUARTPINS_APP_UART_TX_PORT, BOARD_DEINITAPPUARTPINS_APP_UART_TX_PIN, &APP_UART_TX_config);

    gpio_pin_config_t APP_UART_RX_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_9 (pin 12)  */
    GPIO_PinInit(BOARD_DEINITAPPUARTPINS_APP_UART_RX_GPIO, BOARD_DEINITAPPUARTPINS_APP_UART_RX_PORT, BOARD_DEINITAPPUARTPINS_APP_UART_RX_PIN, &APP_UART_RX_config);

    const uint32_t APP_UART_TX = (/* Pin is configured as PIO0_8 */
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
    /* PORT0 PIN8 (coords: 11) is configured as PIO0_8 */
    IOCON_PinMuxSet(IOCON, BOARD_DEINITAPPUARTPINS_APP_UART_TX_PORT, BOARD_DEINITAPPUARTPINS_APP_UART_TX_PIN, APP_UART_TX);

    const uint32_t APP_UART_RX = (/* Pin is configured as PIO0_9 */
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
    /* PORT0 PIN9 (coords: 12) is configured as PIO0_9 */
    IOCON_PinMuxSet(IOCON, BOARD_DEINITAPPUARTPINS_APP_UART_RX_PORT, BOARD_DEINITAPPUARTPINS_APP_UART_RX_PIN, APP_UART_RX);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
