/*
 * Copyright 2023 NXP
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
product: Pins v13.1
processor: MKE17Z512xxx9
package_id: MKE17Z512VLL9
mcu_data: ksdk2_0
processor_version: 0.0.0
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
- options: {callFromInitBoot: 'true', coreID: cm0plus, enableClock: 'true'}
- pin_list:
  - {pin_num: '20', peripheral: LPUART2, signal: RX, pin_signal: PTD17/FTM0_FLT2/LPUART2_RX/TRGMUX_OUT2}
  - {pin_num: '19', peripheral: LPUART2, signal: TX, pin_signal: PTE12/FTM0_FLT3/LPUART2_TX/TRGMUX_OUT3}
  - {pin_num: '100', peripheral: TRGMUX0, signal: 'OUT, 4', pin_signal: PTA8/FXIO_D6/TRGMUX_OUT0}
  - {pin_num: '99', peripheral: TRGMUX0, signal: 'OUT, 5', pin_signal: PTA9/FXIO_D7/TRGMUX_OUT1}
  - {pin_num: '3', peripheral: TRGMUX0, signal: 'OUT, 6', pin_signal: TSI0_CH11/PTD1/FTM0_CH3/LPSPI1_SIN/FTM2_CH1/FXIO_D1/TRGMUX_OUT2}
  - {pin_num: '6', peripheral: TRGMUX0, signal: 'OUT, 8', pin_signal: TSI0_CH10/PTE10/CLKOUT/FXIO_D4/TRGMUX_OUT4}
  - {pin_num: '79', peripheral: TRGMUX0, signal: 'OUT, 7', pin_signal: ACMP0_IN0/TSI1_CH2/PTA0/FTM2_CH1/LPI2C0_SCLS/FXIO_D2/LPUART0_CTS/TRGMUX_OUT3}
  - {pin_num: '5', peripheral: TRGMUX0, signal: 'OUT, 9', pin_signal: TSI0_CH9/PTE11/PWT_IN1/LPTMR0_ALT1/FXIO_D5/TRGMUX_OUT5}
  - {pin_num: '2', peripheral: TRGMUX0, signal: 'OUT, 10', pin_signal: TSI0_CH14/PTE15/FXIO_D2/TRGMUX_OUT6}
  - {pin_num: '1', peripheral: TRGMUX0, signal: 'OUT, 11', pin_signal: TSI0_CH13/PTE16/FXIO_D3/TRGMUX_OUT7}
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
    /* Clock Gate Control: Enables the clock. The current clock selection and divider options are locked and cannot be modified. */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Clock Gate Control: Enables the clock. The current clock selection and divider options are locked and cannot be modified. */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Clock Gate Control: Enables the clock. The current clock selection and divider options are locked and cannot be modified. */
    CLOCK_EnableClock(kCLOCK_PortE);

    /* PORTA0 (pin 79) is configured as TRGMUX_OUT3 */
    PORT_SetPinMux(PORTA, 0U, kPORT_MuxAlt7);

    /* PORTA8 (pin 100) is configured as TRGMUX_OUT0 */
    PORT_SetPinMux(PORTA, 8U, kPORT_MuxAlt7);

    /* PORTA9 (pin 99) is configured as TRGMUX_OUT1 */
    PORT_SetPinMux(PORTA, 9U, kPORT_MuxAlt7);

    /* PORTD1 (pin 3) is configured as TRGMUX_OUT2 */
    PORT_SetPinMux(PORTD, 1U, kPORT_MuxAlt7);

    /* PORTD17 (pin 20) is configured as LPUART2_RX */
    PORT_SetPinMux(PORTD, 17U, kPORT_MuxAlt3);

    /* PORTE10 (pin 6) is configured as TRGMUX_OUT4 */
    PORT_SetPinMux(PORTE, 10U, kPORT_MuxAlt7);

    /* PORTE11 (pin 5) is configured as TRGMUX_OUT5 */
    PORT_SetPinMux(PORTE, 11U, kPORT_MuxAlt7);

    /* PORTE12 (pin 19) is configured as LPUART2_TX */
    PORT_SetPinMux(PORTE, 12U, kPORT_MuxAlt3);

    /* PORTE15 (pin 2) is configured as TRGMUX_OUT6 */
    PORT_SetPinMux(PORTE, 15U, kPORT_MuxAlt7);

    /* PORTE16 (pin 1) is configured as TRGMUX_OUT7 */
    PORT_SetPinMux(PORTE, 16U, kPORT_MuxAlt7);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
