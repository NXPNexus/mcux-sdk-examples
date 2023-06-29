/*! *********************************************************************************
 * \defgroup Alert Notification Server
 * @{
 ********************************************************************************** */
/*! *********************************************************************************
* Copyright (c) 2015, Freescale Semiconductor, Inc.
* Copyright 2016-2018 NXP
* All rights reserved.
*
* \file
*
* This file is the interface file for the Alert Notification Server application
*
* SPDX-License-Identifier: BSD-3-Clause
********************************************************************************** */

#ifndef ALERT_NOTIFICATION_SERVER_H
#define ALERT_NOTIFICATION_SERVER_H

/*************************************************************************************
**************************************************************************************
* Public macros
**************************************************************************************
*************************************************************************************/
#define gScanningTime_c                5

/************************************************************************************
*************************************************************************************
* Public memory declarations
*************************************************************************************
************************************************************************************/

/************************************************************************************
*************************************************************************************
* Public prototypes
*************************************************************************************
************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

void BleApp_Start(void);

#ifdef __cplusplus
}
#endif 


#endif /* ALERT_NOTIFICATION_SERVER_H */

/*! *********************************************************************************
 * @}
 ********************************************************************************** */
