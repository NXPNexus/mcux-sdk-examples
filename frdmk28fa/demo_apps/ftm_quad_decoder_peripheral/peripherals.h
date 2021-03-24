/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_clock.h"
#include "fsl_ftm.h"
#include "fsl_pit.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Definition of peripheral ID */
#define DEMO_FTM_PERIPHERAL FTM1
/* Definition of the clock source frequency */
#define DEMO_FTM_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* FTM interrupt vector ID (number). */
#define DEMO_FTM_IRQN FTM1_IRQn
/* FTM interrupt handler identifier. */
#define DEMO_FTM_IRQHANDLER FTM1_IRQHandler
/* BOARD_InitPeripherals defines for PIT0 */
/* Definition of peripheral ID. */
#define DEMO_PIT_PERIPHERAL PIT0
/* Definition of clock source. */
#define DEMO_PIT_CLOCK_SOURCE kCLOCK_BusClk
/* Definition of clock source frequency. */
#define DEMO_PIT_CLK_FREQ CLOCK_GetFreq(DEMO_PIT_CLOCK_SOURCE)
/* Definition of ticks count for channel 0. */
#define DEMO_PIT_0_TICKS USEC_TO_COUNT(1000U, DEMO_PIT_CLK_FREQ) - 1U
/* PIT interrupt vector ID (number). */
#define DEMO_PIT_0_IRQN PIT0CH0_IRQn
/* PIT interrupt handler identifier. */
#define DEMO_PIT_0_IRQHANDLER PIT0CH0_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const ftm_config_t DEMO_FTM_config;
extern const pit_config_t DEMO_PIT_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
