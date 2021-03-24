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
product: Peripherals v6.0
processor: MKE15Z256xxx7
package_id: MKE15Z256VLL7
mcu_data: ksdk2_0
processor_version: 6.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  called_from_default_init: true
  id_prefix: DEMO_
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
 * ADC12 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC12'
- type: 'adc12'
- mode: 'ADC12'
- type_id: 'adc12_5324d28dd0212c08055a9d9cd4317082'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC0'
- config_sets:
  - fsl_adc12:
    - enable_irq: 'true'
    - adc_interrupt:
      - IRQn: 'ADC0_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - adc12_config:
      - referenceVoltageSource: 'kADC12_ReferenceVoltageSourceVref'
      - clockSource: 'kADC12_ClockSourceAlt0'
      - clockSourceFreq: 'BOARD_BootClockRUN'
      - clockDivider: 'kADC12_ClockDivider1'
      - resolution: 'kADC12_Resolution12Bit'
      - sampleClockCount: '255'
      - enableContinuousConversion: 'false'
    - adc12HardwareCompareConfig:
      - hardwareCompareModeEnable: 'false'
    - adc12_hardware_average_mode: 'kADC12_HardwareAverageDisabled'
    - hardwareTrigger: 'true'
    - enableDMA: 'false'
    - doAutoCalibration: 'true'
    - offset: '0'
    - gain: '0'
    - adc12_channels_config:
      - 0:
        - channelNumber: 'SE.26'
        - enableInterruptOnConversionCompleted: 'true'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const adc12_config_t DEMO_ADC12_config              = {.referenceVoltageSource     = kADC12_ReferenceVoltageSourceVref,
                                          .clockSource                = kADC12_ClockSourceAlt0,
                                          .clockDivider               = kADC12_ClockDivider1,
                                          .resolution                 = kADC12_Resolution12Bit,
                                          .sampleClockCount           = 255,
                                          .enableContinuousConversion = false};
adc12_channel_config_t DEMO_ADC12_channelsConfig[1] = {
    {.channelNumber = 26U, .enableInterruptOnConversionCompleted = true}};
const adc12_hardware_average_mode_t DEMO_ADC12_hardwareAverageConfig = kADC12_HardwareAverageDisabled;

void DEMO_ADC12_init(void)
{
    /* Initialize ADC12 converter */
    ADC12_Init(DEMO_ADC12_PERIPHERAL, &DEMO_ADC12_config);
    /* Set to hardware trigger mode */
    ADC12_EnableHardwareTrigger(DEMO_ADC12_PERIPHERAL, true);
    /* Configure hardware average mode */
    ADC12_SetHardwareAverage(DEMO_ADC12_PERIPHERAL, DEMO_ADC12_hardwareAverageConfig);
    /* Set the offset value for the conversion result */
    ADC12_SetOffsetValue(DEMO_ADC12_PERIPHERAL, (uint32_t)0);
    /* Set the gain value for the conversion result */
    ADC12_SetGainValue(DEMO_ADC12_PERIPHERAL, 0);
    /* Perform auto calibration */
    ADC12_DoAutoCalibration(DEMO_ADC12_PERIPHERAL);
    /* Enable generating the DMA trigger when conversion is completed */
    ADC12_EnableDMA(DEMO_ADC12_PERIPHERAL, false);
    /* Enable interrupt ADC0_IRQn request in the NVIC */
    EnableIRQ(ADC0_IRQn);
}

/***********************************************************************************************************************
 * LPTMR initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LPTMR'
- type: 'lptmr'
- mode: 'LPTMR_GENERAL'
- type_id: 'lptmr_2eeab91a1a42f8238f9ac768f18c65ae'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPTMR0'
- config_sets:
  - fsl_lptmr:
    - enableInterrupt: 'false'
    - enableDma: 'false'
    - interrupt:
      - IRQn: 'PWT_LPTMR0_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - lptmr_config:
      - timerMode: 'kLPTMR_TimerModeTimeCounter'
      - pinSelect: 'ALT.0'
      - pinPolarity: 'kLPTMR_PinPolarityActiveHigh'
      - enableFreeRunning: 'false'
      - bypassPrescaler: 'true'
      - prescalerClockSource: 'kLPTMR_PrescalerClock_1'
      - clockSource: 'BOARD_BootClockRUN'
      - value: 'kLPTMR_Prescale_Glitch_0'
      - timerPeriod: '64000'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lptmr_config_t DEMO_LPTMR_config = {.timerMode            = kLPTMR_TimerModeTimeCounter,
                                          .pinSelect            = kLPTMR_PinSelectInput_0,
                                          .pinPolarity          = kLPTMR_PinPolarityActiveHigh,
                                          .enableFreeRunning    = false,
                                          .bypassPrescaler      = true,
                                          .prescalerClockSource = kLPTMR_PrescalerClock_1,
                                          .value                = kLPTMR_Prescale_Glitch_0};

void DEMO_LPTMR_init(void)
{
    /* Initialize the LPTMR */
    LPTMR_Init(DEMO_LPTMR_PERIPHERAL, &DEMO_LPTMR_config);
    /* Set LPTMR period to 64000us */
    LPTMR_SetTimerPeriod(DEMO_LPTMR_PERIPHERAL, DEMO_LPTMR_TICKS);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
    /* Initialize components */
    DEMO_ADC12_init();
    DEMO_LPTMR_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
    BOARD_InitPeripherals();
}
