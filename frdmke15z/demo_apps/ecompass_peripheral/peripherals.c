/*
 * Copyright 2018-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v5.0
processor: MKE15Z256xxx7
package_id: MKE15Z256VLL7
mcu_data: ksdk2_0
processor_version: 0.0.19
functionalGroups:
- name: BOARD_InitPeripherals
  called_from_default_init: true
  id_prefix: BOARD_
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * ACCEL_I2C initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ACCEL_I2C'
- type: 'lpi2c'
- mode: 'master'
- type_id: 'lpi2c_540b08a1d4a23952ca7a6ac43c82d1e6'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPI2C0'
- config_sets:
  - main:
    - clockSource: 'Lpi2cClock'
    - clockSourceFreq: 'GetIpFreq'
    - interrupt:
      - IRQn: 'LPI2C0_IRQn'
      - enable_priority: 'false'
      - enable_custom_name: 'false'
    - quick_selection: 'qs_interrupt'
  - master:
    - mode: 'transfer'
    - config:
      - enableMaster: 'true'
      - enableDoze: 'true'
      - debugEnable: 'false'
      - ignoreAck: 'false'
      - pinConfig: 'kLPI2C_2PinOpenDrain'
      - baudRate_Hz: '100000'
      - busIdleTimeout_ns: '0'
      - pinLowTimeout_ns: '0'
      - sdaGlitchFilterWidth_ns: '0'
      - sclGlitchFilterWidth_ns: '0'
      - hostRequest:
        - enable: 'false'
        - source: 'kLPI2C_HostRequestExternalPin'
        - polarity: 'kLPI2C_HostRequestPinActiveHigh'
    - transfer:
      - blocking: 'true'
      - flags: ''
      - slaveAddress: '0'
      - direction: 'kLPI2C_Write'
      - subaddress: '0'
      - subaddressSize: '1'
      - dataSize: '1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpi2c_master_config_t BOARD_ACCEL_I2C_masterConfig = {
    .enableMaster            = true,
    .enableDoze              = true,
    .debugEnable             = false,
    .ignoreAck               = false,
    .pinConfig               = kLPI2C_2PinOpenDrain,
    .baudRate_Hz             = 100000,
    .busIdleTimeout_ns       = 0,
    .pinLowTimeout_ns        = 0,
    .sdaGlitchFilterWidth_ns = 0,
    .sclGlitchFilterWidth_ns = 0,
    .hostRequest             = {
        .enable = false, .source = kLPI2C_HostRequestExternalPin, .polarity = kLPI2C_HostRequestPinActiveHigh}};
lpi2c_master_transfer_t BOARD_ACCEL_I2C_masterTransfer = {.flags          = kLPI2C_TransferDefaultFlag,
                                                          .slaveAddress   = 0,
                                                          .direction      = kLPI2C_Write,
                                                          .subaddress     = 0,
                                                          .subaddressSize = 1,
                                                          .data           = BOARD_ACCEL_I2C_masterBuffer,
                                                          .dataSize       = 1};
uint8_t BOARD_ACCEL_I2C_masterBuffer[BOARD_ACCEL_I2C_MASTER_BUFFER_SIZE];

void BOARD_ACCEL_I2C_init(void)
{
    LPI2C_MasterInit(BOARD_ACCEL_I2C_PERIPHERAL, &BOARD_ACCEL_I2C_masterConfig, BOARD_ACCEL_I2C_CLOCK_FREQ);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
    /* Initialize components */
    BOARD_ACCEL_I2C_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
    BOARD_InitPeripherals();
}
