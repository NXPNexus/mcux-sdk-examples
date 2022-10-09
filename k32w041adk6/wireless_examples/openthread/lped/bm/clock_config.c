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
/*
 * How to set up clock using clock driver functions:
 *
 * 1. Setup clock sources.
 *
 * 2. Set up all dividers.
 *
 * 3. Set up all selectors to provide selected clocks.
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v6.0
processor: K32W041A
package_id: K32W041AZ
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
#include "fsl_common.h"
#include "clock_config.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* System clock frequency. */
extern uint32_t SystemCoreClock;

/*******************************************************************************
 * Code
 ******************************************************************************/
void BOARD_BootClockVLPR(void)
{
}

void BOARD_BootClockRUN(void)
{
    /* Already set to mainCLK by default */
    CLOCK_AttachClk(kMAIN_CLK_to_ASYNC_APB);

    /* 32MHz clock */
    CLOCK_EnableClock(kCLOCK_Xtal32M);    /* Normally started already */
    
    /* Make sure it is disabled */
    CLOCK_AttachClk(kNONE_to_USART_CLK);

    /* 32KHz clock */
    CLOCK_EnableClock(CLOCK_32k_source); /* CLOCK_32k_source can be either Fro32k or Xtal32k */
#if gClkUseFro32K
    CLOCK_AttachClk(kFRO32K_to_OSC32K_CLK);
#else
    CLOCK_AttachClk(kXTAL32K_to_OSC32K_CLK);
#endif

    /* WWDT clock config (32k oscillator, no division) */
    CLOCK_AttachClk(kOSC32K_to_WDT_CLK);
    CLOCK_SetClkDiv(kCLOCK_DivWdtClk, 1, true);

}

void BOARD_BootClockHSRUN(void)
{
}
