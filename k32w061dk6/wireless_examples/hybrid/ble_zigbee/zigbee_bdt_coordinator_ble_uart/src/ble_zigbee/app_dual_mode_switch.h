/*! *********************************************************************************
* Copyright (c) 2014, Freescale Semiconductor, Inc.
* Copyright 2016-2020 NXP
*
* \file
*
* This is a include file for the dual mode switch support Zigbee to BLE + BLE to Zigbee.
*
* SPDX-License-Identifier: BSD-3-Clause
********************************************************************************** */

#ifndef _APP_DUAL_MODE_SWITCH_H_
#define _APP_DUAL_MODE_SWITCH_H_

/*! *********************************************************************************
*************************************************************************************
* Include
*************************************************************************************
********************************************************************************** */
#include "EmbeddedTypes.h"

/*! *********************************************************************************
*************************************************************************************
* Public type definitions
*************************************************************************************
********************************************************************************** */

typedef enum {
    eBleAdvStopEvent,
    eBleDisconnectionEvent,
    eBleNotRunningEvent,
    e15_4FactoryResetEvent,
    e15_4WakeUpReinitContinueEvent,
} eDualModeEvent;

/*! *********************************************************************************
*************************************************************************************
* Public macros
*************************************************************************************
********************************************************************************** */

#if defined gLoggingActive_d && (gLoggingActive_d > 0)
#include "dbg_logging.h"
#ifndef DBG_SWITCH
#define DBG_SWITCH 0
#endif
#define SWITCH_DBG_LOG(fmt, ...)   if (DBG_SWITCH) do { DbgLogAdd(__FUNCTION__ , fmt, VA_NUM_ARGS(__VA_ARGS__), ##__VA_ARGS__); } while (0);
#else
#define SWITCH_DBG_LOG(...)
#endif

/*! *********************************************************************************
*************************************************************************************
* Public memory declarations
*************************************************************************************
********************************************************************************** */

/*! *********************************************************************************
*************************************************************************************
* Public prototypes
*************************************************************************************
********************************************************************************** */

/*! *********************************************************************************
* \brief  Runs the dual mode switch Idle Task
*
********************************************************************************** */

#ifdef __cplusplus
extern "C" {
#endif

void dm_switch_IdleTask(void);

/*! *********************************************************************************
* \brief  Process any event and takes action depending of the event
*
* \param[in] pParam
*
********************************************************************************** */
void dm_switch_processEvent(void *pParam);

/*! *********************************************************************************
* \brief  Returns the duration of the 15.4 Init stage after wake up
*         Duration of the function dm_switch_init15_4AfterWakeUp in us 
*
* \return uint32_t
*
********************************************************************************** */
uint32_t dm_switch_get15_4InitWakeUpTime(void);

/*! *********************************************************************************
* \brief  Runs the init 15.4 stage after wake up which should contains radio init calls
*         if any
*
********************************************************************************** */
void dm_switch_init15_4AfterWakeUp(void);

#ifdef __cplusplus
}
#endif

#endif /* _APP_DUAL_MODE_SWITCH_H_ */
