/*
 * Copyright (c) 2015-2016 Intel Corporation
 * Copyright (c) 2022 Codecoup
 * Copyright 2022-2023 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __NCP_CMD_BLE_H__
#define __NCP_CMD_BLE_H__

#include <errno/errno.h>
#include <bluetooth/addr.h>
#include "ncp_cmd_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*BLE NCP Bridge subclass*/
#define NCP_BRIDGE_CMD_BLE_CORE         0x00000000
#define NCP_BRIDGE_CMD_BLE_GAP          0x00010000
#define NCP_BRIDGE_CMD_BLE_GATT         0x00020000
#define NCP_BRIDGE_CMD_BLE_L2CAP        0x00030000
#define NCP_BRIDGE_CMD_BLE_POWERMGMT    0x00040000
#define NCP_BRIDGE_CMD_BLE_VENDOR       0x00050000
#define NCP_BRIDGE_CMD_BLE_OTHER        0x00060000
#define NCP_BRIDGE_CMD_BLE_EVENT        0x000f0000

///* The max size of the network list*/
#ifndef NCP_BLE_MTU
#define NCP_BLE_MTU                 1024
#endif
/*NCP Bridge Command definitions*/
/*BLE Core command*/
#define NCP_BRIDGE_CMD_BLE_CORE_SUPPORT_CMD    (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_CORE | 0x00000001) /* Read supported commands*/
#define NCP_BRIDGE_CMD_BLE_CORE_SUPPORT_SER    (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_CORE | 0x00000002) /* Read supported services*/
#define NCP_BRIDGE_CMD_BLE_CORE_REGISTER       (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_CORE | 0x00000003) /* register services */
#define NCP_BRIDGE_CMD_BLE_CORE_UNREGISTER     (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_CORE | 0x00000004) /* unregister services*/
#define NCP_BRIDGE_CMD_BLE_CORE_RESET          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_CORE | 0x00000006) /* reset board */


/*BLE Gap command*/
#define NCP_BRIDGE_CMD_BLE_GAP_SET_ADV_DATA         (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000001e) /* Set adv data */
#define NCP_BRIDGE_CMD_BLE_GAP_SET_SCAN_PARAM       (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000001d) /* Set scan parameter */
#define NCP_BRIDGE_CMD_BLE_GAP_START_ADV            (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000a) /* Start advertising */
#define NCP_BRIDGE_CMD_BLE_GAP_STOP_ADV             (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000b) /* Stop advertising */
#define NCP_BRIDGE_CMD_BLE_GAP_START_SCAN           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000c) /* Start discovery */
#define NCP_BRIDGE_CMD_BLE_GAP_STOP_SCAN            (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000d) /* Stop discovery */
#define NCP_BRIDGE_CMD_BLE_GAP_CONNECT              (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000e) /* Create a connection */
#define NCP_BRIDGE_CMD_BLE_GAP_DISCONNECT           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000000f) /* Terminate a connection */
#define NCP_BRIDGE_CMD_BLE_GAP_CONN_PARAM_UPDATE    (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x00000016) /* Connection parameters update */
#define NCP_BRIDGE_CMD_BLE_GAP_SET_FILTER_LIST      (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x0000001c) /* Set filter accept list */
#define NCP_BRIDGE_CMD_BLE_GAP_PAIR                 (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GAP | 0x00000011) /* Enable encryption with peer or start pair process */

/*BLE Gatt command*/
#define NCP_BRIDGE_CMD_BLE_GATT_ADD_SERVICE         (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000002) /* Add a Primary or Secondary Service Attribute */
#define NCP_BRIDGE_CMD_BLE_GATT_ADD_CHARACTERISTIC  (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000003) /* Add a New Characteristic Attribute */
#define NCP_BRIDGE_CMD_BLE_GATT_ADD_DESCRIPTOR      (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000004) /* Add a Descriptor Attribute */
#define NCP_BRIDGE_CMD_BLE_GATT_SET_VALUE           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000006) /* Set Characteristic/Descriptor Value */
#define NCP_BRIDGE_CMD_BLE_GATT_START_SERVICE       (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000007) /* Start server with previously prepared attributes database. */
#define NCP_BRIDGE_CMD_BLE_GATT_DISC_PRIM           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_DISC_PRIM_UUID) /* Discover Primary Service */
#define NCP_BRIDGE_CMD_BLE_GATT_DISC_CHRC           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_DISC_CHRC_UUID) /* Discover Characteristics */
#define NCP_BRIDGE_CMD_BLE_GATT_READ                (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000011) /* Read Characteristic/Descriptor */
#define NCP_BRIDGE_CMD_BLE_GATT_CFG_NOTIFY          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_CFG_NOTIFY) /* Configure service to notify characteristic value to clinet */
#define NCP_BRIDGE_CMD_BLE_GATT_CFG_INDICATE        (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_CFG_INDICATE) /* Configure service to indicate characteristic value to clinet */
#define NCP_BRIDGE_CMD_BLE_GATT_WRITE               (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_WRITE) /* Write Characteristic/Descriptor */
#define NCP_BRIDGE_CMD_BLE_GATT_REGISTER_SERVICE    (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | 0x00000020)  /* register a profile service */
#define NCP_BRIDGE_CMD_BLE_GATT_DESC_CHRC           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_GATT | GATT_DISC_DESC_UUID) /* Discover Descriptors */

/*BLE Vendor command*/
#define NCP_BRIDGE_CMD_BLE_VENDOR_POWER_MODE        (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_VENDOR | 0x00000001) /* Enable/Disable power save mode */
#define NCP_BRIDGE_CMD_BLE_VENDOR_SET_UART_BR       (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_VENDOR | 0x00000002) /* Set Uart baud rate */
#define NCP_BRIDGE_CMD_BLE_VENDOR_SET_DEVICE_ADDR   (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_VENDOR | 0x00000003) /* Set Uart LE device address */
#define NCP_BRIDGE_CMD_BLE_VENDOR_SET_DEVICE_NAME   (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_VENDOR | 0x00000004) /* Set Uart LE device name */
#define NCP_BRIDGE_CMD_BLE_VENDOR_CFG_MULTI_ADV     (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_VENDOR | 0x00000005) /* Config Multi-advertising */

/*BLE events*/
#define NCP_BRIDGE_EVENT_IUT_READY                  (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | CORE_EV_IUT_READY) /* IUT Ready event */
#define NCP_BRIDGE_EVENT_ADV_REPORT                 (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_DEVICE_FOUND) /* LE Advertising Report event */
#define NCP_BRIDGE_EVENT_DEVICE_CONNECTED           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_DEVICE_CONNECTED) /* Connection Complete event */
#define NCP_BRIDGE_EVENT_DEVICE_DISCONNECT          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_DEVICE_DISCONNECTED) /* Disconnection Complete event */
#define NCP_BRIDGE_EVENT_PASSKEY_DISPLAY            (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_PASSKEY_DISPLAY) /* Passkey Display event */
#define NCP_BRIDGE_EVENT_IDENITY_RESOLVED           (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_IDENTITY_RESOLVED) /* Remote Identity Address Resolved event */
#define NCP_BRIDGE_EVENT_CONN_PARAM_UPDATE          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_CONN_PARAM_UPDATE) /* Connection param update event */
#define NCP_BRIDGE_EVENT_SEC_LEVEL_CHANGED          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_SEC_LEVEL_CHANGED) /* Security Level Changed event */
#define NCP_BRIDGE_EVENT_PAIRING_FAILED             (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_PAIRING_FAILED) /* GAP pairing failed event */
#define NCP_BRIDGE_EVENT_BOND_LOST                  (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GAP_EV_BOND_LOST) /* GAP bond lost */

#define NCP_BRIDGE_EVENT_GATT_NOTIFICATION          (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GATT_EV_NOTIFICATION | 0x200) /* GATT notification Receive event */
#define NCP_BRIDGE_EVENT_ATTR_VALUE_CHANGED         (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GATT_EV_ATTR_VALUE_CHANGED | 0x200) /* GATT Attribute Value Changed event */
#define NCP_BRIDGE_EVENT_GATT_CCC_CFG_CHANGED       (NCP_BRIDGE_CMD_BLE | NCP_BRIDGE_CMD_BLE_EVENT | GATT_EV_CCC_CFG_CHANGED | 0x200) /* GATT Client Characteristic Configuration Changed event */



#define NCP_BLE_DATA_MAX_SIZE   (NCP_BLE_MTU - 0x05U)

/* Vendor Command */
#define BT_HCI_VD_SET_BD_ADDRESS      BT_OP(BT_OGF_VS, 0x0022)
typedef  NCP_TLV_PACK_START struct _ncp_ble_set_bd_address_cfg {
    uint8_t   paramater_id;
    uint8_t   bd_addr_len;
    uint8_t   bd_address[6];
} NCP_TLV_PACK_END ncp_ble_set_bd_address_cfg;

#define BT_HCI_VD_LOW_POWER_MODE      BT_OP(BT_OGF_VS, 0x0023)
typedef  NCP_TLV_PACK_START struct _ncp_ble_low_power_mode_cfg {
    uint8_t   power_mode;
	  uint16_t  timeout;
} NCP_TLV_PACK_END ncp_ble_low_power_mode_cfg;

#define BT_HCI_VD_MULTI_ADV_CMD       BT_OP(BT_OGF_VS, 0x0154)



/* Core Service */
#define CORE_READ_SUPPORTED_COMMANDS    0x01

typedef NCP_TLV_PACK_START struct core_read_supported_commands_rp_tag {
    uint8_t rsp;
} NCP_TLV_PACK_END core_read_supported_commands_rp_t;

#define CORE_READ_SUPPORTED_SERVICES    0x02
typedef NCP_TLV_PACK_START struct core_read_supported_services_rp_tag {
    uint8_t rsp;
} NCP_TLV_PACK_END core_read_supported_services_rp_t;

#define CORE_REGISTER_SERVICE           0x03
typedef NCP_TLV_PACK_START struct core_register_service_cmd_tag {
    uint8_t id;
} NCP_TLV_PACK_END core_register_service_cmd_t;

#define CORE_UNREGISTER_SERVICE         0x04
typedef NCP_TLV_PACK_START struct core_unregister_service_cmd_tag {
    uint8_t id;
} NCP_TLV_PACK_END core_unregister_service_cmd_t;

#define CORE_RESET_BOARD                0x06

/* events */
#define CORE_EV_IUT_READY               0x80

/* GAP Service */
/* commands */
#define GAP_READ_SUPPORTED_COMMANDS 0x01
typedef NCP_TLV_PACK_START struct gap_read_supported_commands_rp {
  uint8_t data;
} NCP_TLV_PACK_END gap_read_supported_commands_rp_t;

#define GAP_READ_CONTROLLER_INDEX_LIST  0x02
typedef NCP_TLV_PACK_START struct gap_read_controller_index_list_rp {
  uint8_t num;
  uint8_t index;
} NCP_TLV_PACK_END gap_read_controller_index_list_rp_t;

#define GAP_SETTINGS_POWERED            0
#define GAP_SETTINGS_CONNECTABLE        1
#define GAP_SETTINGS_FAST_CONNECTABLE   2
#define GAP_SETTINGS_DISCOVERABLE       3
#define GAP_SETTINGS_BONDABLE           4
#define GAP_SETTINGS_LINK_SEC_3         5
#define GAP_SETTINGS_SSP                6
#define GAP_SETTINGS_BREDR              7
#define GAP_SETTINGS_HS                 8
#define GAP_SETTINGS_LE                 9
#define GAP_SETTINGS_ADVERTISING        10
#define GAP_SETTINGS_SC                 11
#define GAP_SETTINGS_DEBUG_KEYS         12
#define GAP_SETTINGS_PRIVACY            13
#define GAP_SETTINGS_CONTROLLER_CONFIG  14
#define GAP_SETTINGS_STATIC_ADDRESS     15

#define GAP_READ_CONTROLLER_INFO  0x03
typedef NCP_TLV_PACK_START struct gap_read_controller_info_rp {
  uint8_t  address[6];
  uint32_t supported_settings;
  uint32_t current_settings;
  uint8_t  cod[3];
  uint8_t  name[249];
  uint8_t  short_name[11];
} NCP_TLV_PACK_END gap_read_controller_info_rp_t;

#define GAP_RESET     0x04
typedef NCP_TLV_PACK_START struct gap_reset_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_reset_rp_t;

#define GAP_SET_POWERED     0x05
typedef NCP_TLV_PACK_START struct gap_set_powered_cmd {
  uint8_t powered;
} NCP_TLV_PACK_END gap_set_powered_cmd_t;
typedef NCP_TLV_PACK_START struct gap_set_powered_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_set_powered_rp_t;

#define GAP_SET_CONNECTABLE   0x06
typedef NCP_TLV_PACK_START struct gap_set_connectable_cmd {
  uint8_t connectable;
} NCP_TLV_PACK_END gap_set_connectable_cmd_t;
typedef NCP_TLV_PACK_START struct gap_set_connectable_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_set_connectable_rp_t;

#define GAP_SET_FAST_CONNECTABLE  0x07
typedef NCP_TLV_PACK_START struct gap_set_fast_connectable_cmd {
  uint8_t fast_connectable;
} NCP_TLV_PACK_END gap_set_fast_connectable_cmd_t;
typedef NCP_TLV_PACK_START struct gap_set_fast_connectable_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_set_fast_connectable_rp_t;

#define GAP_NON_DISCOVERABLE      0x00
#define GAP_GENERAL_DISCOVERABLE  0x01
#define GAP_LIMITED_DISCOVERABLE  0x02

#define GAP_SET_DISCOVERABLE    0x08
typedef NCP_TLV_PACK_START struct gap_set_discoverable_cmd {
  uint8_t discoverable;
} NCP_TLV_PACK_END gap_set_discoverable_cmd_t;
typedef NCP_TLV_PACK_START struct gap_set_discoverable_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_set_discoverable_rp_t;

#define GAP_SET_BONDABLE    0x09
typedef NCP_TLV_PACK_START struct gap_set_bondable_cmd {
  uint8_t bondable;
} NCP_TLV_PACK_END gap_set_bondable_cmd_t;
typedef NCP_TLV_PACK_START struct gap_set_bondable_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_set_bondable_rp_t;

#define GAP_START_ADVERTISING 0x0a
typedef NCP_TLV_PACK_START struct gap_start_advertising_cmd {
  uint8_t adv_data_len;
  uint8_t scan_rsp_len;
  uint8_t adv_sr_data[];
} NCP_TLV_PACK_END gap_start_advertising_cmd_t;
typedef NCP_TLV_PACK_START struct gap_start_advertising_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_start_advertising_rp_t;

#define GAP_STOP_ADVERTISING    0x0b
typedef NCP_TLV_PACK_START struct gap_stop_advertising_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_stop_advertising_rp_t;

#define GAP_DISCOVERY_FLAG_LE                0x01
#define GAP_DISCOVERY_FLAG_BREDR             0x02
#define GAP_DISCOVERY_FLAG_LIMITED           0x04
#define GAP_DISCOVERY_FLAG_LE_ACTIVE_SCAN    0x08
#define GAP_DISCOVERY_FLAG_LE_OBSERVE        0x10
#define GAP_DISCOVERY_FLAG_OWN_ID_ADDR       0x20

#define GAP_START_DISCOVERY   0x0c
typedef NCP_TLV_PACK_START struct gap_start_discovery_cmd {
  uint8_t flags;
} NCP_TLV_PACK_END gap_start_discovery_cmd_t;

#define GAP_STOP_DISCOVERY    0x0d

#define GAP_CONNECT     0x0e
typedef NCP_TLV_PACK_START struct gap_connect_cmd {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_connect_cmd_t;

#define GAP_DISCONNECT      0x0f
typedef NCP_TLV_PACK_START struct gap_disconnect_cmd {
  uint8_t  address_type;
  uint8_t  address[6];
} NCP_TLV_PACK_END gap_disconnect_cmd_t;

#define GAP_IO_CAP_DISPLAY_ONLY     0
#define GAP_IO_CAP_DISPLAY_YESNO    1
#define GAP_IO_CAP_KEYBOARD_ONLY    2
#define GAP_IO_CAP_NO_INPUT_OUTPUT  3
#define GAP_IO_CAP_KEYBOARD_DISPLAY 4

#define GAP_SET_IO_CAP      0x10
typedef NCP_TLV_PACK_START struct gap_set_io_cap_cmd {
  uint8_t io_cap;
} NCP_TLV_PACK_END gap_set_io_cap_cmd_t;

#define GAP_PAIR      0x11
typedef NCP_TLV_PACK_START struct gap_pair_cmd {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_pair_cmd_t;

#define GAP_UNPAIR      0x12
typedef NCP_TLV_PACK_START struct gap_unpair_cmd {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_unpair_cmd_t;

#define GAP_PASSKEY_ENTRY   0x13
typedef NCP_TLV_PACK_START struct gap_passkey_entry_cmd {
  uint8_t  address_type;
  uint8_t  address[6];
  uint32_t passkey;
} NCP_TLV_PACK_END gap_passkey_entry_cmd_t;

#define GAP_PASSKEY_CONFIRM   0x14
typedef NCP_TLV_PACK_START struct gap_passkey_confirm_cmd {
  uint8_t address_type;
  uint8_t address[6];
  uint8_t match;
} NCP_TLV_PACK_END gap_passkey_confirm_cmd_t;

#define GAP_START_DIRECTED_ADV_HD BIT(0)
#define GAP_START_DIRECTED_ADV_OWN_ID BIT(1)
#define GAP_START_DIRECTED_ADV_PEER_RPA BIT(2)

#define GAP_START_DIRECTED_ADV    0x15
typedef NCP_TLV_PACK_START struct gap_start_directed_adv_cmd {
  uint8_t address_type;
  uint8_t address[6];
  uint16_t options;
} NCP_TLV_PACK_END gap_start_directed_adv_cmd_t;
typedef NCP_TLV_PACK_START struct gap_start_directed_adv_rp {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_start_directed_adv_rp_t;

#define GAP_CONN_PARAM_UPDATE   0x16
typedef NCP_TLV_PACK_START struct gap_conn_param_update_cmd {
  uint8_t address_type;
  uint8_t address[6];
  uint16_t interval_min;
  uint16_t interval_max;
  uint16_t latency;
  uint16_t timeout;
} NCP_TLV_PACK_END gap_conn_param_update_cmd_t;

#define GAP_PAIRING_CONSENT   0x17
typedef NCP_TLV_PACK_START struct gap_pairing_consent_cmd {
  uint8_t address_type;
  uint8_t address[6];
  uint8_t consent;
} NCP_TLV_PACK_END gap_pairing_consent_cmd_t;

#define GAP_OOB_LEGACY_SET_DATA   0x18
typedef NCP_TLV_PACK_START struct gap_oob_legacy_set_data_cmd {
  uint8_t oob_data[16];
} NCP_TLV_PACK_END gap_oob_legacy_set_data_cmd_t;

#define GAP_OOB_SC_GET_LOCAL_DATA 0x19
typedef NCP_TLV_PACK_START struct gap_oob_sc_get_local_data_rp {
  uint8_t rand[16];
  uint8_t conf[16];
} NCP_TLV_PACK_END gap_oob_sc_get_local_data_rp_t;

#define GAP_OOB_SC_SET_REMOTE_DATA  0x1a
typedef NCP_TLV_PACK_START struct gap_oob_sc_set_remote_data_cmd {
  uint8_t rand[16];
  uint8_t conf[16];
} NCP_TLV_PACK_END gap_oob_sc_set_remote_data_cmd_t;

#define GAP_SET_MITM      0x1b
typedef NCP_TLV_PACK_START struct gap_set_mitm {
  uint8_t mitm;
} NCP_TLV_PACK_END gap_set_mitm_t;

#define GAP_SET_FILTER_LIST 0x1c
typedef NCP_TLV_PACK_START struct gap_set_filter_list {
    uint8_t cnt;
    bt_addr_le_t addr[0];
} NCP_TLV_PACK_END gap_set_filter_list_t;

#define GAP_SET_SCAN_PARAMETER 0x1d
typedef NCP_TLV_PACK_START struct gap_set_scan_param_cmd {
  /** Bit-field of scanning options. */
  uint32_t options;
  /** Scan interval (N * 0.625 ms) */
  uint16_t interval;
  /** Scan window (N * 0.625 ms) */
  uint16_t window;
} NCP_TLV_PACK_END gap_set_scan_param_cmd_t;

#define GAP_SET_ADV_DATA 0x1e
typedef NCP_TLV_PACK_START struct gap_set_adv_data_cmd {
   uint8_t adv_data_len;
   uint8_t data[31];
} NCP_TLV_PACK_END gap_set_adv_data_cmd_t;

/* events */
#define GAP_EV_NEW_SETTINGS   0x80
typedef NCP_TLV_PACK_START struct gap_new_settings_ev {
  uint32_t current_settings;
} NCP_TLV_PACK_END gap_new_settings_ev_t;

#define GAP_DEVICE_FOUND_FLAG_RSSI  0x01
#define GAP_DEVICE_FOUND_FLAG_AD    0x02
#define GAP_DEVICE_FOUND_FLAG_SD    0x04

#define GAP_EV_DEVICE_FOUND   0x81
typedef NCP_TLV_PACK_START struct gap_device_found_ev {
  uint8_t  address_type;
  uint8_t  address[6];
  int8_t   rssi;
  uint8_t  flags;
  uint16_t eir_data_len;
  uint8_t  eir_data[];
} NCP_TLV_PACK_END gap_device_found_ev_t;

#define GAP_EV_DEVICE_CONNECTED   0x82
typedef NCP_TLV_PACK_START struct gap_device_connected_ev {
  uint8_t address_type;
  uint8_t address[6];
  uint16_t interval;
  uint16_t latency;
  uint16_t timeout;
} NCP_TLV_PACK_END gap_device_connected_ev_t;

#define GAP_EV_DEVICE_DISCONNECTED  0x83
typedef NCP_TLV_PACK_START struct gap_device_disconnected_ev {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_device_disconnected_ev_t;

#define GAP_EV_PASSKEY_DISPLAY    0x84
typedef NCP_TLV_PACK_START struct gap_passkey_display_ev {
  uint8_t  address_type;
  uint8_t  address[6];
  uint32_t passkey;
} NCP_TLV_PACK_END gap_passkey_display_ev_t;

#define GAP_EV_PASSKEY_ENTRY_REQ  0x85
typedef NCP_TLV_PACK_START struct gap_passkey_entry_req_ev {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_passkey_entry_req_ev_t;

#define GAP_EV_PASSKEY_CONFIRM_REQ  0x86
typedef NCP_TLV_PACK_START struct gap_passkey_confirm_req_ev {
  uint8_t  address_type;
  uint8_t  address[6];
  uint32_t passkey;
} NCP_TLV_PACK_END gap_passkey_confirm_req_ev_t;

#define GAP_EV_IDENTITY_RESOLVED  0x87
typedef NCP_TLV_PACK_START struct gap_identity_resolved_ev {
  uint8_t address_type;
  uint8_t address[6];
  uint8_t identity_address_type;
  uint8_t identity_address[6];
} NCP_TLV_PACK_END gap_identity_resolved_ev_t;

#define GAP_EV_CONN_PARAM_UPDATE  0x88
typedef NCP_TLV_PACK_START struct gap_conn_param_update_ev {
  uint8_t address_type;
  uint8_t address[6];
  uint16_t interval;
  uint16_t latency;
  uint16_t timeout;
} NCP_TLV_PACK_END gap_conn_param_update_ev_t;

#define GAP_SEC_LEVEL_UNAUTH_ENC  0x01
#define GAP_SEC_LEVEL_AUTH_ENC    0x02
#define GAP_SEC_LEVEL_AUTH_SC     0x03

#define GAP_EV_SEC_LEVEL_CHANGED  0x89
typedef NCP_TLV_PACK_START struct gap_sec_level_changed_ev {
  uint8_t address_type;
  uint8_t address[6];
  uint8_t sec_level;
} NCP_TLV_PACK_END gap_sec_level_changed_ev_t;

#define GAP_EV_PAIRING_CONSENT_REQ  0x8a
typedef NCP_TLV_PACK_START struct gap_pairing_consent_req_ev {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_pairing_consent_req_ev_t;

#define GAP_EV_BOND_LOST  0x8b
typedef NCP_TLV_PACK_START struct gap_bond_lost_ev {
  uint8_t address_type;
  uint8_t address[6];
} NCP_TLV_PACK_END gap_bond_lost_ev_t;

#define GAP_EV_PAIRING_FAILED   0x8c
typedef NCP_TLV_PACK_START struct gap_bond_pairing_failed_ev {
  uint8_t address_type;
  uint8_t address[6];
  uint8_t reason;
} NCP_TLV_PACK_END gap_bond_pairing_failed_ev_t;

/* L2CAP Service */
/* commands */
#define L2CAP_READ_SUPPORTED_COMMANDS   0x01
typedef NCP_TLV_PACK_START struct l2cap_read_supported_commands_rp_tag {
    uint8_t data[1];
} NCP_TLV_PACK_END l2cap_read_supported_commands_rp_t;

#define L2CAP_CONNECT_OPT_ECFC          0x01
#define L2CAP_CONNECT_OPT_HOLD_CREDIT   0x02

#define L2CAP_CONNECT   0x02
typedef NCP_TLV_PACK_START struct l2cap_connect_cmd_tag {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t psm;
    uint16_t mtu;
    uint8_t num;
    uint8_t options;
} NCP_TLV_PACK_END l2cap_connect_cmd_t;

typedef NCP_TLV_PACK_START struct l2cap_connect_rp_tag {
    uint8_t num;
    uint8_t chan_id[];
} NCP_TLV_PACK_END l2cap_connect_rp_t;

#define L2CAP_DISCONNECT    0x03
typedef NCP_TLV_PACK_START struct l2cap_disconnect_cmd_tag {
    uint8_t chan_id;
} NCP_TLV_PACK_END l2cap_disconnect_cmd_t;

#define L2CAP_SEND_DATA     0x04
typedef NCP_TLV_PACK_START struct l2cap_send_data_cmd_tag {
    uint8_t chan_id;
    uint16_t data_len;
    uint8_t data[];
} NCP_TLV_PACK_END l2cap_send_data_cmd_t;

#define L2CAP_TRANSPORT_BREDR                       0x00
#define L2CAP_TRANSPORT_LE                          0x01

#define L2CAP_CONNECTION_RESPONSE_SUCCESS           0x00
#define L2CAP_CONNECTION_RESPONSE_INSUFF_AUTHEN     0x01
#define L2CAP_CONNECTION_RESPONSE_INSUFF_AUTHOR     0x02
#define L2CAP_CONNECTION_RESPONSE_INSUFF_ENC_KEY    0x03

#define L2CAP_LISTEN    0x05
typedef NCP_TLV_PACK_START struct l2cap_listen_cmd_tag {
    uint16_t psm;
    uint8_t transport;
    uint16_t mtu;
    uint16_t response;
} NCP_TLV_PACK_END l2cap_listen_cmd_t;

#define L2CAP_ACCEPT_CONNECTION     0x06
typedef NCP_TLV_PACK_START struct l2cap_accept_connection_cmd_tag {
    uint8_t chan_id;
    uint16_t result;
} NCP_TLV_PACK_END l2cap_accept_connection_cmd_t;

#define L2CAP_RECONFIGURE   0x07
typedef NCP_TLV_PACK_START struct l2cap_reconfigure_cmd_tag {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t mtu;
    uint8_t num;
    uint8_t chan_id[];
} NCP_TLV_PACK_END l2cap_reconfigure_cmd_t;

#define L2CAP_CREDITS   0x08
typedef NCP_TLV_PACK_START struct l2cap_credits_cmd_tag {
    uint8_t chan_id;
} NCP_TLV_PACK_END l2cap_credits_cmd_t;

#define L2CAP_DISCONNECT_EATT_CHANS     0x09
typedef NCP_TLV_PACK_START struct l2cap_disconnect_eatt_chans_cmd_tag {
    uint8_t address_type;
    uint8_t address[6];
    uint8_t count;
} NCP_TLV_PACK_END l2cap_disconnect_eatt_chans_cmd_t;

/* events */
#define L2CAP_EV_CONNECTION_REQ     0x80
typedef NCP_TLV_PACK_START struct l2cap_connection_req_ev_tag {
    uint8_t chan_id;
    uint16_t psm;
    uint8_t address_type;
    uint8_t address[6];
} NCP_TLV_PACK_END l2cap_connection_req_ev_t;

#define L2CAP_EV_CONNECTED  0x81
typedef NCP_TLV_PACK_START struct l2cap_connected_ev_tag {
    uint8_t chan_id;
    uint16_t psm;
    uint16_t mtu_remote;
    uint16_t mps_remote;
    uint16_t mtu_local;
    uint16_t mps_local;
    uint8_t address_type;
    uint8_t address[6];
} NCP_TLV_PACK_END l2cap_connected_ev_t;

#define L2CAP_EV_DISCONNECTED   0x82
typedef NCP_TLV_PACK_START struct l2cap_disconnected_ev_tag {
    uint16_t result;
    uint8_t chan_id;
    uint16_t psm;
    uint8_t address_type;
    uint8_t address[6];
} NCP_TLV_PACK_END l2cap_disconnected_ev_t;

#define L2CAP_EV_DATA_RECEIVED  0x83
typedef NCP_TLV_PACK_START struct l2cap_data_received_ev_tag {
    uint8_t chan_id;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END l2cap_data_received_ev_t;

#define L2CAP_EV_RECONFIGURED   0x84
typedef NCP_TLV_PACK_START struct l2cap_reconfigured_ev_tag {
    uint8_t chan_id;
    uint16_t mtu_remote;
    uint16_t mps_remote;
    uint16_t mtu_local;
    uint16_t mps_local;
} NCP_TLV_PACK_END l2cap_reconfigured_ev_t;

/* GATT Service */

/* GATT server context */
#define SERVER_MAX_SERVICES     10
#define SERVER_MAX_ATTRIBUTES   50
#define SERVER_MAX_UUID_LEN     16
#define SERVER_BUF_SIZE         2048

/* commands */
#define GATT_READ_SUPPORTED_COMMANDS    0x01
typedef NCP_TLV_PACK_START struct gatt_read_supported_commands_rp {
    uint8_t data;
} NCP_TLV_PACK_END gatt_read_supported_commands_rp_t;

#define GATT_SERVICE_PRIMARY        0x00
#define GATT_SERVICE_SECONDARY      0x01

#define GATT_ADD_SERVICE        0x02
typedef NCP_TLV_PACK_START struct gatt_add_service_cmd {
    uint8_t type;
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_add_service_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_add_service_rp {
    uint16_t svc_id;
} NCP_TLV_PACK_END gatt_add_service_rp_t;

#define GATT_ADD_CHARACTERISTIC     0x03
typedef NCP_TLV_PACK_START struct gatt_add_characteristic_cmd {
    uint16_t svc_id;
    uint8_t properties;
    uint16_t permissions;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_add_characteristic_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_add_characteristic_rp {
    uint16_t char_id;
} NCP_TLV_PACK_END gatt_add_characteristic_rp_t;

#define GATT_ADD_DESCRIPTOR     0x04
typedef NCP_TLV_PACK_START struct gatt_add_descriptor_cmd {
    uint16_t char_id;
    uint16_t permissions;
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_add_descriptor_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_add_descriptor_rp {
    uint16_t desc_id;
} NCP_TLV_PACK_END gatt_add_descriptor_rp_t;

#define GATT_ADD_INCLUDED_SERVICE   0x05
typedef NCP_TLV_PACK_START struct gatt_add_included_service_cmd {
    uint16_t svc_id;
} NCP_TLV_PACK_END gatt_add_included_service_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_add_included_service_rp {
    uint16_t included_service_id;
} NCP_TLV_PACK_END gatt_add_included_service_rp_t;

#define GATT_SET_VALUE          0x06
typedef NCP_TLV_PACK_START struct gatt_set_value_cmd {
    // uint16_t attr_id;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
    uint16_t len;
    uint8_t value[512];
} NCP_TLV_PACK_END gatt_set_value_cmd_t;

#define GATT_START_SERVER       0x07
typedef NCP_TLV_PACK_START struct gatt_start_server_rp {
    uint16_t db_attr_off;
    uint8_t db_attr_cnt;
} NCP_TLV_PACK_END gatt_start_server_rp_t;

#define GATT_RESET_SERVER       0x08

#define GATT_SET_ENC_KEY_SIZE       0x09
typedef NCP_TLV_PACK_START struct gatt_set_enc_key_size_cmd {
    uint16_t attr_id;
    uint8_t key_size;
} NCP_TLV_PACK_END gatt_set_enc_key_size_cmd_t;

/* Gatt Client */
typedef NCP_TLV_PACK_START struct gatt_service {
    uint16_t start_handle;
    uint16_t end_handle;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_service_t;

typedef NCP_TLV_PACK_START struct gatt_included {
    uint16_t included_handle;
    struct gatt_service service;
} NCP_TLV_PACK_END gatt_included_t;

typedef NCP_TLV_PACK_START struct gatt_characteristic {
    uint16_t characteristic_handle;
    uint16_t value_handle;
    uint8_t properties;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_characteristic_t;

typedef NCP_TLV_PACK_START struct gatt_descriptor {
    uint16_t descriptor_handle;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_descriptor_t;

#define GATT_EXCHANGE_MTU       0x0a
typedef NCP_TLV_PACK_START struct gatt_exchange_mtu_cmd {
    uint8_t address_type;
    uint8_t address[6];
} NCP_TLV_PACK_END gatt_exchange_mtu_cmd_t;

#define GATT_DISC_ALL_PRIM      0x0b
typedef NCP_TLV_PACK_START struct gatt_disc_all_prim_cmd {
    uint8_t address_type;
    uint8_t address[6];
} NCP_TLV_PACK_END gatt_disc_all_prim_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_disc_all_prim_rp {
    uint8_t services_count;
    gatt_service_t services[SERVER_MAX_SERVICES];
} NCP_TLV_PACK_END gatt_disc_all_prim_rp_t;

#define GATT_DISC_PRIM_UUID     0x0c
typedef NCP_TLV_PACK_START struct gatt_disc_prim_uuid_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_disc_prim_uuid_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_disc_prim_rp {
    uint8_t services_count;
    gatt_service_t services[SERVER_MAX_SERVICES];
} NCP_TLV_PACK_END gatt_disc_prim_rp_t;

#define GATT_FIND_INCLUDED      0x0d
typedef NCP_TLV_PACK_START struct gatt_find_included_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
} NCP_TLV_PACK_END gatt_find_included_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_find_included_rp {
    uint8_t services_count;
    gatt_included_t included[SERVER_MAX_SERVICES];
} NCP_TLV_PACK_END gatt_find_included_rp_t;

#define GATT_DISC_ALL_CHRC      0x0e
typedef NCP_TLV_PACK_START struct gatt_disc_all_chrc_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
} NCP_TLV_PACK_END gatt_disc_all_chrc_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_disc_chrc_rp {
    uint8_t characteristics_count;
    gatt_characteristic_t characteristics[SERVER_MAX_ATTRIBUTES];
} NCP_TLV_PACK_END gatt_disc_chrc_rp_t;

#define GATT_DISC_CHRC_UUID     0x0f
typedef NCP_TLV_PACK_START struct gatt_disc_chrc_uuid_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_disc_chrc_uuid_cmd_t;

#define GATT_DISC_ALL_DESC      0x10
typedef NCP_TLV_PACK_START struct gatt_disc_all_desc_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
} NCP_TLV_PACK_END gatt_disc_all_desc_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_disc_all_desc_rp {
    uint8_t descriptors_count;
    gatt_descriptor_t descriptors[SERVER_MAX_ATTRIBUTES];
} NCP_TLV_PACK_END gatt_disc_all_desc_rp_t;

#define GATT_DISC_DESC_UUID     0x21
typedef NCP_TLV_PACK_START struct gatt_disc_desc_uuid_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_disc_desc_uuid_cmd_t;

#define GATT_READ           0x11
typedef NCP_TLV_PACK_START struct gatt_read_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
} NCP_TLV_PACK_END gatt_read_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_read_rp {
    uint8_t att_response;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_read_rp_t;

#define GATT_READ_UUID          0x12
typedef NCP_TLV_PACK_START struct gatt_read_uuid_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t start_handle;
    uint16_t end_handle;
    uint8_t uuid_length;
    uint8_t uuid[];
} NCP_TLV_PACK_END gatt_read_uuid_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_char_value {
    uint16_t handle;
    uint8_t data_len;
    uint8_t data[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_char_value_t;
typedef NCP_TLV_PACK_START struct gatt_read_uuid_rp {
    uint8_t att_response;
    uint8_t values_count;
    gatt_char_value_t values[SERVER_MAX_ATTRIBUTES];
} NCP_TLV_PACK_END gatt_read_uuid_rp_t;

#define GATT_READ_LONG          0x13
typedef NCP_TLV_PACK_START struct gatt_read_long_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t offset;
} NCP_TLV_PACK_END gatt_read_long_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_read_long_rp {
    uint8_t att_response;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_read_long_rp_t;

#define GATT_READ_MULTIPLE      0x14
typedef NCP_TLV_PACK_START struct gatt_read_multiple_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint8_t handles_count;
    uint16_t handles[];
} NCP_TLV_PACK_END gatt_read_multiple_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_read_multiple_rp {
    uint8_t att_response;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_read_multiple_rp_t;

#define GATT_WRITE_WITHOUT_RSP      0x15
typedef NCP_TLV_PACK_START struct gatt_write_without_rsp_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_write_without_rsp_cmd_t;

#define GATT_SIGNED_WRITE_WITHOUT_RSP   0x16
typedef NCP_TLV_PACK_START struct gatt_signed_write_without_rsp_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_signed_write_without_rsp_cmd_t;

#define GATT_WRITE          0x17
typedef NCP_TLV_PACK_START struct gatt_write_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_write_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_write_rp {
    uint8_t att_response;
} NCP_TLV_PACK_END gatt_write_rp_t;

#define GATT_WRITE_LONG         0x18
typedef NCP_TLV_PACK_START struct gatt_write_long_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t offset;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_write_long_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_write_long_rp {
    uint8_t att_response;
} NCP_TLV_PACK_END gatt_write_long_rp_t;

#define GATT_RELIABLE_WRITE     0x19
typedef NCP_TLV_PACK_START struct gatt_reliable_write_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
    uint16_t offset;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_reliable_write_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_reliable_write_rp {
    uint8_t att_response;
} NCP_TLV_PACK_END gatt_reliable_write_rp_t;

#define GATT_CFG_NOTIFY         0x1a
#define GATT_CFG_INDICATE       0x1b
typedef NCP_TLV_PACK_START struct gatt_cfg_notify_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint8_t enable;
    uint16_t ccc_handle;
} NCP_TLV_PACK_END gatt_cfg_notify_cmd_t;

#define GATT_GET_ATTRIBUTES     0x1c
typedef NCP_TLV_PACK_START struct gatt_get_attributes_cmd {
    uint16_t start_handle;
    uint16_t end_handle;
    uint8_t type_length;
    uint8_t type[];
} NCP_TLV_PACK_END gatt_get_attributes_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_get_attributes_rp {
    uint8_t attrs_count;
    uint8_t attrs[];
} NCP_TLV_PACK_END gatt_get_attributes_rp_t;
typedef NCP_TLV_PACK_START struct gatt_attr {
    uint16_t handle;
    uint8_t permission;
    uint8_t type_length;
    uint8_t type[];
} NCP_TLV_PACK_END gatt_attr_t;

#define GATT_GET_ATTRIBUTE_VALUE    0x1d
typedef NCP_TLV_PACK_START struct gatt_get_attribute_value_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t handle;
} NCP_TLV_PACK_END gatt_get_attribute_value_cmd_t;
typedef NCP_TLV_PACK_START struct gatt_get_attribute_value_rp {
    uint8_t att_response;
    uint16_t value_length;
    uint8_t value[];
} NCP_TLV_PACK_END gatt_get_attribute_value_rp_t;

#define GATT_CHANGE_DB          0x1e
typedef NCP_TLV_PACK_START struct gatt_change_db_cmd {
    uint16_t start_handle;
    uint8_t visibility;
} NCP_TLV_PACK_END gatt_change_db_cmd_t;

#define GATT_EATT_CONNECT		0x1f
struct gatt_eatt_connect_cmd {
	uint8_t address_type;
	uint8_t address[6];
	uint8_t num_channels;
} NCP_TLV_PACK_END NCP_TLV_PACK_START;

#define GATT_READ_MULTIPLE_VAR      0x20

#define GATT_NOTIFY_MULTIPLE        0x21
typedef NCP_TLV_PACK_START struct gatt_cfg_notify_mult_cmd {
    uint8_t address_type;
    uint8_t address[6];
    uint16_t cnt;
    uint16_t attr_id[];
} NCP_TLV_PACK_END gatt_cfg_notify_mult_cmd_t;

#define GATT_NCP_BLE_ADD_SERVICE    0x22

typedef NCP_TLV_PACK_START struct gatt_ncp_ble_add_service_cmd
{
    uint8_t svc_length;
    uint8_t svc[];
} NCP_TLV_PACK_END gatt_ncp_ble_add_service_cmd_t;

/* GATT events */
#define GATT_EV_NOTIFICATION        0x80
typedef NCP_TLV_PACK_START struct gatt_notification_ev {
    uint8_t address_type;
    uint8_t address[6];
    uint8_t type;
    uint16_t handle;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_notification_ev_t;

#define GATT_EV_ATTR_VALUE_CHANGED  0x81
typedef NCP_TLV_PACK_START struct gatt_attr_value_changed_ev {
    uint16_t handle;
    uint16_t data_length;
    uint8_t data[];
} NCP_TLV_PACK_END gatt_attr_value_changed_ev_t;

#define GATT_EV_CCC_CFG_CHANGED  0x82
typedef NCP_TLV_PACK_START struct gatt_ccc_cfg_changed_ev {
    uint16_t ccc_value;
    uint8_t uuid_length;
    uint8_t uuid[SERVER_MAX_UUID_LEN];
} NCP_TLV_PACK_END gatt_ccc_cfg_changed_ev_t;

typedef NCP_TLV_PACK_START struct gatt_ncp_ble_add_service_rp {
    uint8_t svc_length;
    uint8_t status[];
} NCP_TLV_PACK_END gatt_ncp_ble_add_service_rp_t;

typedef NCP_TLV_PACK_START struct _NCPCmd_DS_COMMAND
{
   /** Command Header : Command */
   NCP_BRIDGE_COMMAND header;
   /** Command Body */
#if 0
   union
   {
       /** Scan result*/
       NCP_CMD_SCAN_NETWORK_INFO scan_network_info;
       /** Firmware version*/
       NCP_CMD_FW_VERSION fw_version;
       /** MAC address */
       NCP_CMD_MAC_ADDRESS mac_addr;
       /** Get MAC address */
       NCP_CMD_GET_MAC_ADDRESS get_mac_addr;
   } params;
#endif
} NCP_TLV_PACK_END NCPCmd_DS_COMMAND;

#endif /* __NCP_CMD_BLE_H__ */
