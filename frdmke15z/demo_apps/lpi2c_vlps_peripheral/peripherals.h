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

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_clock.h"
#include "fsl_lpi2c.h"
#include "fsl_lpit.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Used DMA device. */
#define DEMO_DMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DEMO_DMA_DMAMUX_BASEADDR DMAMUX

  /* Channel CH0 definitions */
/* DMA eDMA source request. */
#define DEMO_DMA_CH0_DMA_REQUEST kDmaRequestMux0LPI2C0Tx
/* Selected eDMA channel number. */
#define DEMO_DMA_CH0_DMA_CHANNEL 0

  /* Channel CH1 definitions */
/* DMA eDMA source request. */
#define DEMO_DMA_CH1_DMA_REQUEST kDmaRequestMux0LPI2C0Rx
/* Selected eDMA channel number. */
#define DEMO_DMA_CH1_DMA_CHANNEL 1
/* BOARD_InitPeripherals defines for LPI2C0 */
/* Definition of peripheral ID */
#define DEMO_LPI2C_PERIPHERAL LPI2C0
/* Definition of clock source */
#define DEMO_LPI2C_CLOCK_FREQ CLOCK_GetIpFreq(kCLOCK_Lpi2c0)
/* Transfer buffer size */
#define DEMO_LPI2C_MASTER_BUFFER_SIZE 1
/* BOARD_InitPeripherals defines for LPIT0 */
/* Definition of peripheral ID. */
#define DEMO_LPIT_PERIPHERAL LPIT0
/* Definition of clock source frequency. */
#define DEMO_LPIT_CLK_FREQ 8000000UL
/* Definition of ticks count for channel Channel. */
#define DEMO_LPIT_CHANNEL_TICKS 3999999U
/* Definition of channel kLPIT_Chnl_0 ID */
#define DEMO_LPIT_CHANNEL kLPIT_Chnl_0
/* LPIT interrupt vector ID (number). */
#define DEMO_LPIT_IRQN LPIT0_IRQn
/* LPIT interrupt handler identifier. */
#define LPIT_IRQHandler LPIT0_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DEMO_DMA_config;
extern const lpi2c_master_config_t DEMO_LPI2C_masterConfig;
extern lpi2c_master_transfer_t DEMO_LPI2C_masterTransfer;
extern uint8_t DEMO_LPI2C_masterBuffer[DEMO_LPI2C_MASTER_BUFFER_SIZE];
extern lpi2c_master_handle_t DEMO_LPI2C_masterHandle;
extern const lpit_config_t DEMO_LPIT_config;
extern const lpit_chnl_params_t DEMO_LPIT_Channel_struct;

/***********************************************************************************************************************
 * Callback functions
 **********************************************************************************************************************/
/* Master transfer callback function for component LPI2C*/
extern void lpi2c_master_callback(LPI2C_Type *base, lpi2c_master_handle_t *handle, status_t completionStatus, void *userData);

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
