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
processor: MK28FN2M0Axxx15
package_id: MK28FN2M0AVMI15
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
 * eDMA initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'eDMA'
- type: 'edma'
- mode: 'basic'
- type_id: 'edma_a23fca76a894e1bcdf9d01a687505ff9'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'DMA'
- config_sets:
  - fsl_edma:
    - common_settings:
      - enableContinuousLinkMode: 'false'
      - enableHaltOnError: 'true'
      - enableRoundRobinArbitration: 'false'
      - enableDebugMode: 'false'
    - dma_table:
      - 0: []
    - edma_channels:
      - 0:
        - edma_channel:
          - channel_prefix_id: 'ADC0'
          - eDMAn: '0'
          - eDMA_source: 'kDmaRequestMux0ADC0'
          - enable_custom_name: 'false'
        - init_callback: 'false'
        - callback_function: ''
        - callback_user_data: ''
        - init_preemption: 'false'
        - preemption:
          - enableChannelPreemption: 'false'
          - enablePreemptAbility: 'false'
          - channelPriority: '0'
        - init_channel_link: 'false'
        - channel_link: 'kEDMA_LinkNone'
        - linkedChannel: '0'
        - init_bandwidth: 'false'
        - bandwidth: 'kEDMA_BandwidthStallNone'
        - init_interrupts: 'true'
        - channel_enabled_interrupts: ''
        - interrupt_channel:
          - IRQn: 'DMA0_DMA16_IRQn'
          - enable_priority: 'false'
          - priority: '0'
          - enable_custom_name: 'false'
        - tcd_pool_enable: 'false'
        - tcd_settings: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const edma_config_t DEMO_eDMA_config = {.enableContinuousLinkMode    = false,
                                        .enableHaltOnError           = true,
                                        .enableRoundRobinArbitration = false,
                                        .enableDebugMode             = false};

/* Channel ADC0 global variables */
edma_handle_t DEMO_eDMA_ADC0_Handle;

void DEMO_eDMA_init(void)
{
    /* Channel ADC0 initialization */
    /* Set the source kDmaRequestMux0ADC0 request in the DMAMUX */
    DMAMUX_SetSource(DEMO_EDMA_DMAMUX_BASEADDR, DEMO_EDMA_ADC0_DMA_CHANNEL, DEMO_EDMA_ADC0_DMA_REQUEST);
    /* Enable the 0 channel in the DMAMUX */
    DMAMUX_EnableChannel(DEMO_EDMA_DMAMUX_BASEADDR, DEMO_EDMA_ADC0_DMA_CHANNEL);
    /* Create the eDMA DEMO_eDMA_ADC0_Handle handle */
    EDMA_CreateHandle(&DEMO_eDMA_ADC0_Handle, DEMO_EDMA_DMA_BASEADDR, DEMO_EDMA_ADC0_DMA_CHANNEL);
    EDMA_EnableChannelInterrupts(DEMO_EDMA_DMA_BASEADDR, DEMO_EDMA_ADC0_DMA_CHANNEL, 0);
    /* Enable interrupt DMA0_DMA16_IRQn request in the NVIC */
    EnableIRQ(DEMO_EDMA_DMA_CH_INT_DONE_0_IRQN);
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
    - interrupt:
      - IRQn: 'LPTMR0_LPTMR1_IRQn'
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
      - timerPeriod: '100000'
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
    /* Set LPTMR period to 100000us */
    LPTMR_SetTimerPeriod(DEMO_LPTMR_PERIPHERAL, DEMO_LPTMR_TICKS);
}

/***********************************************************************************************************************
 * ADC16 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC16'
- type: 'adc16'
- mode: 'ADC'
- type_id: 'adc16_7d827be2dc433dc756d94a7ce88cbcc5'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC0'
- config_sets:
  - fsl_adc16:
    - adc16_config:
      - referenceVoltageSource: 'kADC16_ReferenceVoltageSourceVref'
      - clockSource: 'kADC16_ClockSourceAsynchronousClock'
      - enableAsynchronousClock: 'true'
      - clockDivider: 'kADC16_ClockDivider8'
      - resolution: 'kADC16_Resolution16Bit'
      - longSampleMode: 'kADC16_LongSampleCycle24'
      - enableHighSpeed: 'false'
      - enableLowPower: 'true'
      - enableContinuousConversion: 'false'
    - adc16_channel_mux_mode: 'kADC16_ChannelMuxA'
    - adc16_hardware_compare_config:
      - hardwareCompareModeEnable: 'false'
    - doAutoCalibration: 'true'
    - trigger: 'true'
    - hardwareAverageConfiguration: 'kADC16_HardwareAverageDisabled'
    - enable_dma: 'true'
    - enable_irq: 'false'
    - adc_interrupt:
      - IRQn: 'ADC0_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - adc16_channels_config:
      - 0:
        - enableDifferentialConversion: 'false'
        - channelNumber: 'SE.26'
        - enableInterruptOnConversionCompleted: 'false'
        - channelGroup: '0'
        - initializeChannel: 'true'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
adc16_channel_config_t DEMO_ADC16_channelsConfig[1] = {{
    .channelNumber                        = 26U,
    .enableDifferentialConversion         = false,
    .enableInterruptOnConversionCompleted = false,
}};
const adc16_config_t DEMO_ADC16_config              = {.referenceVoltageSource     = kADC16_ReferenceVoltageSourceVref,
                                          .clockSource                = kADC16_ClockSourceAsynchronousClock,
                                          .enableAsynchronousClock    = true,
                                          .clockDivider               = kADC16_ClockDivider8,
                                          .resolution                 = kADC16_Resolution16Bit,
                                          .longSampleMode             = kADC16_LongSampleCycle24,
                                          .enableHighSpeed            = false,
                                          .enableLowPower             = true,
                                          .enableContinuousConversion = false};
const adc16_channel_mux_mode_t DEMO_ADC16_muxMode   = kADC16_ChannelMuxA;
const adc16_hardware_average_mode_t DEMO_ADC16_hardwareAverageMode = kADC16_HardwareAverageDisabled;

void DEMO_ADC16_init(void)
{
    /* Initialize ADC16 converter */
    ADC16_Init(DEMO_ADC16_PERIPHERAL, &DEMO_ADC16_config);
    /* Make sure, that hardware trigger is used */
    ADC16_EnableHardwareTrigger(DEMO_ADC16_PERIPHERAL, true);
    /* Configure hardware average mode */
    ADC16_SetHardwareAverage(DEMO_ADC16_PERIPHERAL, DEMO_ADC16_hardwareAverageMode);
    /* Configure channel multiplexing mode */
    ADC16_SetChannelMuxMode(DEMO_ADC16_PERIPHERAL, DEMO_ADC16_muxMode);
    /* Perform auto calibration */
    ADC16_DoAutoCalibration(DEMO_ADC16_PERIPHERAL);
    /* Enable DMA requests from ADC0 peripheral */
    ADC16_EnableDMA(DEMO_ADC16_PERIPHERAL, true);
    /* Initialize channel */
    ADC16_SetChannelConfig(DEMO_ADC16_PERIPHERAL, 0U, &DEMO_ADC16_channelsConfig[0]);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
    /* Global initialization */
    DMAMUX_Init(DEMO_EDMA_DMAMUX_BASEADDR);
    EDMA_Init(DEMO_EDMA_DMA_BASEADDR, &DEMO_eDMA_config);

    /* Initialize components */
    DEMO_eDMA_init();
    DEMO_LPTMR_init();
    DEMO_ADC16_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
    BOARD_InitPeripherals();
}
