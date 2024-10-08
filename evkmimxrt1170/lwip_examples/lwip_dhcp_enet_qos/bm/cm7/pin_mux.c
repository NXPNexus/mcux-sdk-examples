/*
 * Copyright 2022-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v12.0
processor: MIMXRT1176xxxxx
package_id: MIMXRT1176DVMAA
mcu_data: ksdk2_0
processor_version: 12.0.1
pin_labels:
- {pin_num: B6, pin_signal: GPIO_DISP_B2_12, label: PHY_INTR, identifier: PHY_INTR}
- {pin_num: A5, pin_signal: GPIO_DISP_B2_13, label: PHY_RESET, identifier: PHY_RESET}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitDebugConsolePins();
    BOARD_InitEnetPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDebugConsolePins:
- options: {callFromInitBoot: 'true', coreID: cm7, enableClock: 'true'}
- pin_list:
  - {pin_num: L13, peripheral: LPUART1, signal: TXD, pin_signal: GPIO_AD_24, slew_rate: Slow}
  - {pin_num: M15, peripheral: LPUART1, signal: RXD, pin_signal: GPIO_AD_25, slew_rate: Slow}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDebugConsolePins, assigned for the Cortex-M7F core.
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDebugConsolePins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* LPCG on: LPCG is ON. */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_24_LPUART1_TXD,          /* GPIO_AD_24 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_25_LPUART1_RXD,          /* GPIO_AD_25 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_24_LPUART1_TXD,          /* GPIO_AD_24 PAD functional properties : */
      0x06U);                                 /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: high drive strength
                                                 Pull / Keep Select Field: Pull Enable
                                                 Pull Up / Down Config. Field: Weak pull down
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_25_LPUART1_RXD,          /* GPIO_AD_25 PAD functional properties : */
      0x06U);                                 /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: high drive strength
                                                 Pull / Keep Select Field: Pull Enable
                                                 Pull Up / Down Config. Field: Weak pull down
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitEnetPins:
- options: {callFromInitBoot: 'true', coreID: cm7, enableClock: 'true'}
- pin_list:
  - {pin_num: A5, peripheral: GPIO11, signal: 'gpio_io, 14', pin_signal: GPIO_DISP_B2_13, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: B6, peripheral: GPIO5, signal: 'gpio_mux_io, 13', pin_signal: GPIO_DISP_B2_12, direction: INPUT, gpio_interrupt: kGPIO_IntLowLevel, pull_up_down_config: Pull_Up}
  - {pin_num: E13, peripheral: ENET_QOS, signal: enet_rx_en, pin_signal: GPIO_DISP_B1_00, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: D13, peripheral: ENET_QOS, signal: enet_rx_clk, pin_signal: GPIO_DISP_B1_01, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: D11, peripheral: ENET_QOS, signal: 'enet_rdata, 00', pin_signal: GPIO_DISP_B1_02, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: E11, peripheral: ENET_QOS, signal: 'enet_rdata, 01', pin_signal: GPIO_DISP_B1_03, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: E10, peripheral: ENET_QOS, signal: 'enet_rdata, 02', pin_signal: GPIO_DISP_B1_04, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: C11, peripheral: ENET_QOS, signal: 'enet_rdata, 03', pin_signal: GPIO_DISP_B1_05, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver}
  - {pin_num: D10, peripheral: ENET_QOS, signal: 'enet_tdata, 03', pin_signal: GPIO_DISP_B1_06, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: E12, peripheral: ENET_QOS, signal: 'enet_tdata, 02', pin_signal: GPIO_DISP_B1_07, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: A15, peripheral: ENET_QOS, signal: 'enet_tdata, 01', pin_signal: GPIO_DISP_B1_08, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: C13, peripheral: ENET_QOS, signal: 'enet_tdata, 00', pin_signal: GPIO_DISP_B1_09, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: A14, peripheral: ENET_QOS, signal: enet_tx_clk, pin_signal: GPIO_DISP_B1_11, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: B14, peripheral: ENET_QOS, signal: enet_tx_en, pin_signal: GPIO_DISP_B1_10, pull_down_pull_up_config: No_Pull, pdrv_config: High_Driver}
  - {pin_num: U2, peripheral: ENET_QOS, signal: enet_mdc, pin_signal: GPIO_EMC_B2_19, pull_down_pull_up_config: Pull_Down, open_drain: Disable}
  - {pin_num: R3, peripheral: ENET_QOS, signal: enet_mdio, pin_signal: GPIO_EMC_B2_20, pull_down_pull_up_config: Pull_Down, open_drain: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitEnetPins, assigned for the Cortex-M7F core.
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitEnetPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* LPCG on: LPCG is ON. */

  /* GPIO configuration of PHY_INTR on GPIO_DISP_B2_12 (pin B6) */
  gpio_pin_config_t PHY_INTR_config = {
      .direction = kGPIO_DigitalInput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_IntLowLevel
  };
  /* Initialize GPIO functionality on GPIO_DISP_B2_12 (pin B6) */
  GPIO_PinInit(GPIO5, 13U, &PHY_INTR_config);
  /* Enable GPIO pin interrupt on GPIO_DISP_B2_12 (pin B6) */
  GPIO_PortEnableInterrupts(GPIO5, 1U << 13U);

  /* GPIO configuration of PHY_RESET on GPIO_DISP_B2_13 (pin A5) */
  gpio_pin_config_t PHY_RESET_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 1U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_DISP_B2_13 (pin A5) */
  GPIO_PinInit(GPIO11, 14U, &PHY_RESET_config);

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_00_ENET_QOS_RX_EN,  /* GPIO_DISP_B1_00 is configured as ENET_QOS_RX_EN */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_01_ENET_QOS_RX_CLK,  /* GPIO_DISP_B1_01 is configured as ENET_QOS_RX_CLK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_02_ENET_QOS_RX_DATA00,  /* GPIO_DISP_B1_02 is configured as ENET_QOS_RX_DATA00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_03_ENET_QOS_RX_DATA01,  /* GPIO_DISP_B1_03 is configured as ENET_QOS_RX_DATA01 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_04_ENET_QOS_RX_DATA02,  /* GPIO_DISP_B1_04 is configured as ENET_QOS_RX_DATA02 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_05_ENET_QOS_RX_DATA03,  /* GPIO_DISP_B1_05 is configured as ENET_QOS_RX_DATA03 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_06_ENET_QOS_TX_DATA03,  /* GPIO_DISP_B1_06 is configured as ENET_QOS_TX_DATA03 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_07_ENET_QOS_TX_DATA02,  /* GPIO_DISP_B1_07 is configured as ENET_QOS_TX_DATA02 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_08_ENET_QOS_TX_DATA01,  /* GPIO_DISP_B1_08 is configured as ENET_QOS_TX_DATA01 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_09_ENET_QOS_TX_DATA00,  /* GPIO_DISP_B1_09 is configured as ENET_QOS_TX_DATA00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_10_ENET_QOS_TX_EN,  /* GPIO_DISP_B1_10 is configured as ENET_QOS_TX_EN */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B1_11_ENET_QOS_TX_CLK,  /* GPIO_DISP_B1_11 is configured as ENET_QOS_TX_CLK */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B2_12_GPIO_MUX5_IO13,  /* GPIO_DISP_B2_12 is configured as GPIO_MUX5_IO13 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_DISP_B2_13_GPIO11_IO14,     /* GPIO_DISP_B2_13 is configured as GPIO11_IO14 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_B2_19_ENET_QOS_MDC,     /* GPIO_EMC_B2_19 is configured as ENET_QOS_MDC */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_B2_20_ENET_QOS_MDIO,    /* GPIO_EMC_B2_20 is configured as ENET_QOS_MDIO */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_00_ENET_QOS_RX_EN,  /* GPIO_DISP_B1_00 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_01_ENET_QOS_RX_CLK,  /* GPIO_DISP_B1_01 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_02_ENET_QOS_RX_DATA00,  /* GPIO_DISP_B1_02 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_03_ENET_QOS_RX_DATA01,  /* GPIO_DISP_B1_03 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_04_ENET_QOS_RX_DATA02,  /* GPIO_DISP_B1_04 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_05_ENET_QOS_RX_DATA03,  /* GPIO_DISP_B1_05 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_06_ENET_QOS_TX_DATA03,  /* GPIO_DISP_B1_06 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_07_ENET_QOS_TX_DATA02,  /* GPIO_DISP_B1_07 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_08_ENET_QOS_TX_DATA01,  /* GPIO_DISP_B1_08 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_09_ENET_QOS_TX_DATA00,  /* GPIO_DISP_B1_09 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_10_ENET_QOS_TX_EN,  /* GPIO_DISP_B1_10 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B1_11_ENET_QOS_TX_CLK,  /* GPIO_DISP_B1_11 PAD functional properties : */
      0x0CU);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: No Pull
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_DISP_B2_12_GPIO_MUX5_IO13,  /* GPIO_DISP_B2_12 PAD functional properties : */
      0x0EU);                                 /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: high drive strength
                                                 Pull / Keep Select Field: Pull Enable
                                                 Pull Up / Down Config. Field: Weak pull up
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_EMC_B2_19_ENET_QOS_MDC,     /* GPIO_EMC_B2_19 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_EMC_B2_20_ENET_QOS_MDIO,    /* GPIO_EMC_B2_20 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
