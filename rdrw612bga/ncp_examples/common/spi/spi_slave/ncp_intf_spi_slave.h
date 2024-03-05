/** @file ncp_intf_spi_slave.h
 *
 *  @brief main file
 *
 *  Copyright 2023 NXP
 *  All rights reserved.
 *
 *  SPDX-License-Identifier: BSD-3-Clause
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define NCP_SPI_SLAVE        SPI0
#define NCP_SPI_SLAVE_DMA              DMA0
#define NCP_SPI_SLAVE_DMA_RX_CHANNEL 0
#define NCP_SPI_SLAVE_DMA_TX_CHANNEL 1
#define NCP_SPI_SLAVE_SPOL   kSPI_SpolActiveAllLow

#define NCP_SPI_SLAVE_TX    1
#define NCP_SPI_SLAVE_RX    2

#define NCP_SPI_GPIO_TX        27
#define NCP_SPI_GPIO_RX        11
/* gpio44, port1 */
#define NCP_SPI_GPIO_RX_READY  (44 - 32)

#define NCP_SPI_SLAVE_GPIO_TX_MASK 0x8000000
#define NCP_SPI_SLAVE_GPIO_RX_MASK 0x800
#define NCP_SPI_SLAVE_GPIO_RX_READY_MASK (1 << NCP_SPI_GPIO_RX_READY)

#define NCP_HOST_GPIO_INTA_IRQHandler GPIO_INTA_DriverIRQHandler
#define SLAVE_TX_ENABLE_EVENT       1 << 1
#define SLAVE_RX_ENABLE_EVENT       1 << 2
#define INTERRUPT_TYPE              kGPIO_InterruptA

#define NCP_SPI_TX          1 << 0

typedef enum
{
    NCP_SLAVE_SPI_IDLE = 0,
    NCP_SLAVE_SPI_TX,
    NCP_SLAVE_SPI_RX,
    NCP_SLAVE_SPI_END,
} ncp__slave_state;