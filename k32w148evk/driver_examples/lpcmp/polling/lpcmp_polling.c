/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2023 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_lpcmp.h"

#include "fsl_vref.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define DEMO_LPCMP_BASE             LPCMP0
#define DEMO_LPCMP_USER_CHANNEL     0U
#define DEMO_LPCMP_DAC_CHANNEL      7U
#define DEMO_LPCMP_IRQ_ID           LPCMP0_IRQn
#define LED_INIT()                  LED1_INIT(LOGIC_LED_OFF)
#define LED_ON()                    LED1_ON()
#define LED_OFF()                   LED1_OFF()
#define DEMO_LPCMP_IRQ_HANDLER_FUNC LPCMP0_IRQHandler
#define DEMO_VREF_BASE              VREF0

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
    lpcmp_config_t mLpcmpConfigStruct;
    lpcmp_dac_config_t mLpcmpDacConfigStruct;

    /* Initialize hardware. */
    vref_config_t vrefConfig;

    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    gpio_pin_config_t LED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic  = 0U,
    };

    /* Initialize GPIO functionality on pin PTB1 */
    GPIO_PinInit(BOARD_LED1_GPIO, BOARD_LED1_GPIO_PIN, &LED_config);

    VREF_GetDefaultConfig(&vrefConfig);
    /* Initialize the VREF mode. */
    VREF_Init(DEMO_VREF_BASE, &vrefConfig);
    /* Get a 1.8V reference voltage. */
    VREF_SetTrim21Val(DEMO_VREF_BASE, 8U);

    PRINTF("LPCMP Polling Example.\r\n");

    /*
     *   k_LpcmpConfigStruct->enableStopMode      = false;
     *   k_LpcmpConfigStruct->enableOutputPin     = false;
     *   k_LpcmpConfigStruct->useUnfilteredOutput = false;
     *   k_LpcmpConfigStruct->enableInvertOutput  = false;
     *   k_LpcmpConfigStruct->hysteresisMode      = kLPCMP_HysteresisLevel0;
     *   k_LpcmpConfigStruct->powerMode           = kLPCMP_LowSpeedPowerMode;
     *   k_LpcmpConfigStruct->functionalSourceClock = kLPCMP_FunctionalClockSource0;
     */
    LPCMP_GetDefaultConfig(&mLpcmpConfigStruct);
    /* Init the LPCMP module. */
    LPCMP_Init(DEMO_LPCMP_BASE, &mLpcmpConfigStruct);

    /* Configure the internal DAC to output half of reference voltage. */
    mLpcmpDacConfigStruct.enableLowPowerMode = false;
#ifdef DEMO_LPCMP_REFERENCE
    mLpcmpDacConfigStruct.referenceVoltageSource = DEMO_LPCMP_REFERENCE;
#else
    mLpcmpDacConfigStruct.referenceVoltageSource = kLPCMP_VrefSourceVin2;
#endif
    mLpcmpDacConfigStruct.DACValue =
        ((LPCMP_DCR_DAC_DATA_MASK >> LPCMP_DCR_DAC_DATA_SHIFT) >> 1U); /* Half of reference voltage. */
    LPCMP_SetDACConfig(DEMO_LPCMP_BASE, &mLpcmpDacConfigStruct);

    /* Configure LPCMP input channels. */
    LPCMP_SetInputChannels(DEMO_LPCMP_BASE, DEMO_LPCMP_USER_CHANNEL, DEMO_LPCMP_DAC_CHANNEL);

    /* Init the LED. */
    LED_INIT();

    while (1)
    {
        if (0U == (kLPCMP_OutputAssertEventFlag & LPCMP_GetStatusFlags(DEMO_LPCMP_BASE)))
        {
            LED_OFF(); /* Turn off led. */
        }
        else
        {
            LED_ON(); /* Turn on led. */
        }
    }
}
