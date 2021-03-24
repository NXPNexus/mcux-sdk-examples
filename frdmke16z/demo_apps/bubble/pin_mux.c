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

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: MKE16Z64xxx4
package_id: MKE16Z64VLF4
mcu_data: ksdk2_0
processor_version: 0.0.0
board: FRDM-KE16Z
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
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
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '26', peripheral: LPUART0, signal: TX, pin_signal: ADC0_SE5/PTB1/LPUART0_TX/LPSPI0_SOUT/TCLK0}
  - {pin_num: '27', peripheral: LPUART0, signal: RX, pin_signal: ADC0_SE4/PTB0/LPUART0_RX/LPSPI0_PCS0/LPTMR0_ALT3/PWT_IN3}
  - {pin_num: '41', peripheral: GPIOE, signal: 'GPIO, 6', pin_signal: PTE6/LPSPI0_PCS2/LPUART1_RTS}
  - {pin_num: '1', peripheral: FTM0, signal: 'CH, 3', pin_signal: TSI0_CH5/PTD1/FTM0_CH3/TRGMUX_OUT2}
  - {pin_num: '15', peripheral: FTM0, signal: 'CH, 5', pin_signal: TSI0_CH9/PTB5/FTM0_CH5/LPSPI0_PCS1/TRGMUX_IN0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Clock Gate Control: 0x01u */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Clock Gate Control: 0x01u */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Clock Gate Control: 0x01u */
    CLOCK_EnableClock(kCLOCK_PortE);

    /* PORTB0 (pin 27) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_DEBUG_UART_RX_PORT, BOARD_DEBUG_UART_RX_PIN, kPORT_MuxAlt2);

    /* PORTB1 (pin 26) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_DEBUG_UART_TX_PORT, BOARD_DEBUG_UART_TX_PIN, kPORT_MuxAlt2);

    /* PORTB5 (pin 15) is configured as FTM0_CH5 */
    PORT_SetPinMux(BOARD_LED_RED_PORT, BOARD_LED_RED_PIN, kPORT_MuxAlt2);

    /* PORTD1 (pin 1) is configured as FTM0_CH3 */
    PORT_SetPinMux(BOARD_LED_BLUE_PORT, BOARD_LED_BLUE_PIN, kPORT_MuxAlt2);

    /* PORTE6 (pin 41) is configured as PTE6 */
    PORT_SetPinMux(BOARD_ACCEL_RST_PORT, BOARD_ACCEL_RST_PIN, kPORT_MuxAsGpio);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '35', peripheral: LPI2C0, signal: SCL, pin_signal: PTA3/LPI2C0_SCL/EWM_IN/LPUART0_TX}
  - {pin_num: '36', peripheral: LPI2C0, signal: SDA, pin_signal: PTA2/LPI2C0_SDA/EWM_OUT_b/LPUART0_RX}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_I2C_ConfigurePins(void)
{
    /* Clock Gate Control: 0x01u */
    CLOCK_EnableClock(kCLOCK_PortA);

    /* PORTA2 (pin 36) is configured as LPI2C0_SDA */
    PORT_SetPinMux(BOARD_ACCEL_SDA_PORT, BOARD_ACCEL_SDA_PIN, kPORT_MuxAlt3);

    /* PORTA3 (pin 35) is configured as LPI2C0_SCL */
    PORT_SetPinMux(BOARD_ACCEL_SCL_PORT, BOARD_ACCEL_SCL_PIN, kPORT_MuxAlt3);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
