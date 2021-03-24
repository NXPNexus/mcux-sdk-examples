/*
 * Copyright 2019 NXP
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
product: Peripherals v7.0
processor: MKV11Z128xxx7
package_id: MKV11Z128VLH7
mcu_data: ksdk2_0
processor_version: 0.7.1
board: FRDM-KV11Z
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: cd44408c-1289-47e5-8dc4-2ba41be21ae9
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
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
 * I2C initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'I2C'
- type: 'i2c'
- mode: 'I2C_Polling'
- custom_name_enabled: 'true'
- type_id: 'i2c_2566d7363e7e9aaedabb432110e372d7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'I2C0'
- config_sets:
  - fsl_i2c:
    - i2c_mode: 'kI2C_Master'
    - clockSource: 'BusInterfaceClock'
    - clockSourceFreq: 'GetFreq'
    - i2c_master_config:
      - enableMaster: 'true'
      - enableStopHold: 'false'
      - baudRate_Bps: '100000'
      - glitchFilterWidth: '0'
    - quick_selection: 'QS_I2C_1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const i2c_master_config_t I2C_config = {
  .enableMaster = true,
  .enableStopHold = false,
  .baudRate_Bps = 100000,
  .glitchFilterWidth = 0
};

void I2C_init(void) {
  /* Initialization function */
  I2C_MasterInit(I2C_PERIPHERAL, &I2C_config, I2C_CLK_FREQ);
}

/***********************************************************************************************************************
 * FTM initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FTM'
- type: 'ftm'
- mode: 'EdgeAligned'
- custom_name_enabled: 'true'
- type_id: 'ftm_04a15ae4af2b404bf2ae403c3dbe98b3'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FTM0'
- config_sets:
  - ftm_main_config:
    - ftm_config:
      - clockSource: 'kFTM_SystemClock'
      - clockSourceFreq: 'GetFreq'
      - prescale: 'kFTM_Prescale_Divide_1'
      - timerFrequency: '24000'
      - bdmMode: 'kFTM_BdmMode_0'
      - pwmSyncMode: 'kFTM_SoftwareTrigger'
      - reloadPoints: ''
      - faultMode: 'kFTM_Fault_Disable'
      - faultFilterValue: '0'
      - deadTimePrescale: 'kFTM_Deadtime_Prescale_1'
      - deadTimeValue: '0'
      - extTriggers: ''
      - chnlInitState: ''
      - chnlPolarity: ''
      - useGlobalTimeBase: 'false'
    - timer_interrupts: ''
    - enable_irq: 'false'
    - ftm_interrupt:
      - IRQn: 'FTM0_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - EnableTimerInInit: 'false'
  - ftm_edge_aligned_mode:
    - ftm_edge_aligned_channels_config:
      - 0:
        - edge_aligned_mode: 'kFTM_EdgeAlignedPwm'
        - edge_aligned_pwm:
          - chnlNumber: 'kFTM_Chnl_0'
          - level: 'kFTM_LowTrue'
          - dutyCyclePercent: '0'
          - enable_chan_irq: 'false'
      - 1:
        - edge_aligned_mode: 'kFTM_EdgeAlignedPwm'
        - edge_aligned_pwm:
          - chnlNumber: 'kFTM_Chnl_1'
          - level: 'kFTM_LowTrue'
          - dutyCyclePercent: '0'
          - enable_chan_irq: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const ftm_config_t FTM_config = {
  .prescale = kFTM_Prescale_Divide_1,
  .bdmMode = kFTM_BdmMode_0,
  .pwmSyncMode = kFTM_SoftwareTrigger,
  .reloadPoints = 0,
  .faultMode = kFTM_Fault_Disable,
  .faultFilterValue = 0,
  .deadTimePrescale = kFTM_Deadtime_Prescale_1,
  .deadTimeValue = 0,
  .extTriggers = 0,
  .chnlInitState = 0,
  .chnlPolarity = 0,
  .useGlobalTimeBase = false
};

const ftm_chnl_pwm_signal_param_t FTM_pwmSignalParams[] = { 
  {
    .chnlNumber = kFTM_Chnl_0,
    .level = kFTM_LowTrue,
    .dutyCyclePercent = 0
  },
  {
    .chnlNumber = kFTM_Chnl_1,
    .level = kFTM_LowTrue,
    .dutyCyclePercent = 0
  }
};

void FTM_init(void) {
  FTM_Init(FTM_PERIPHERAL, &FTM_config);
  FTM_SetupPwm(FTM_PERIPHERAL, FTM_pwmSignalParams, sizeof(FTM_pwmSignalParams) / sizeof(ftm_chnl_pwm_signal_param_t), kFTM_EdgeAlignedPwm, 24000U, FTM_CLOCK_SOURCE);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  I2C_init();
  FTM_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
