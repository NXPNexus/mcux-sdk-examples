PRIMARY_SERVICE(service_gatt, gBleSig_GenericAttributeProfile_d)
        CHARACTERISTIC(char_service_changed, gBleSig_GattServiceChanged_d, (gGattCharPropIndicate_c) )
            VALUE(value_service_changed, gBleSig_GattServiceChanged_d, (gPermissionNone_c), 4, 0x00, 0x00, 0x00, 0x00)
            CCCD(cccd_service_changed)

PRIMARY_SERVICE(service_gap, gBleSig_GenericAccessProfile_d)
    CHARACTERISTIC(char_device_name, gBleSig_GapDeviceName_d, (gGattCharPropRead_c | gGattCharPropWrite_c) )
            VALUE(value_device_name, gBleSig_GapDeviceName_d, (gPermissionFlagReadable_c | gPermissionFlagWritable_c), 11, "NXP_BLE_HID")
    CHARACTERISTIC(char_appearance, gBleSig_GapAppearance_d, (gGattCharPropRead_c) )
            VALUE(value_appearance, gBleSig_GapAppearance_d, (gPermissionFlagReadable_c), 2, UuidArray(gMouse_c))
    CHARACTERISTIC(char_ppcp, gBleSig_GapPpcp_d, (gGattCharPropRead_c) )
            VALUE(value_ppcp, gBleSig_GapPpcp_d, (gPermissionFlagReadable_c), 8, 0x0A, 0x00, 0x10, 0x00, 0x64, 0x00, 0xE2, 0x04)

PRIMARY_SERVICE(service_device_info, gBleSig_DeviceInformationService_d)
    CHARACTERISTIC(char_manuf_name, gBleSig_ManufacturerNameString_d, (gGattCharPropRead_c) )
        VALUE(value_manuf_name, gBleSig_ManufacturerNameString_d, (gPermissionFlagReadable_c), sizeof(MANUFACTURER_NAME)-1, MANUFACTURER_NAME)
    CHARACTERISTIC(char_model_no, gBleSig_ModelNumberString_d, (gGattCharPropRead_c) )
        VALUE(value_model_no, gBleSig_ModelNumberString_d, (gPermissionFlagReadable_c), 14, "HID Mouse Demo")
    CHARACTERISTIC(char_serial_no, gBleSig_SerialNumberString_d, (gGattCharPropRead_c) )
        VALUE(value_serial_no, gBleSig_SerialNumberString_d, (gPermissionFlagReadable_c), 7, "BLESN01")
    CHARACTERISTIC(char_hw_rev, gBleSig_HardwareRevisionString_d, (gGattCharPropRead_c) )
        VALUE(value_hw_rev, gBleSig_HardwareRevisionString_d, (gPermissionFlagReadable_c), sizeof(BOARD_NAME)-1, BOARD_NAME)
    CHARACTERISTIC(char_fw_rev, gBleSig_FirmwareRevisionString_d, (gGattCharPropRead_c) )
        VALUE(value_fw_rev, gBleSig_FirmwareRevisionString_d, (gPermissionFlagReadable_c), 5, "1.1.1")
    CHARACTERISTIC(char_sw_rev, gBleSig_SoftwareRevisionString_d, (gGattCharPropRead_c) )
        VALUE(value_sw_rev, gBleSig_SoftwareRevisionString_d, (gPermissionFlagReadable_c), 5, "1.1.4")
    CHARACTERISTIC(char_system_id, gBleSig_SystemId_d, (gGattCharPropRead_c) )
        VALUE(value_system_id, gBleSig_SystemId_d, (gPermissionFlagReadable_c), 8, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x9F, 0x04, 0x00)
    CHARACTERISTIC(char_pnp_id, 0x2A50, (gGattCharPropRead_c) )
        VALUE(value_pnp_id, 0x2A50, (gPermissionFlagReadable_c), 7, 0x01, 0x6a,0x00, 0x00, 0x01, 0x00, 0x01)

PRIMARY_SERVICE(service_battery, gBleSig_BatteryService_d)
    CHARACTERISTIC(char_battery_level, gBleSig_BatteryLevel_d, (gGattCharPropNotify_c | gGattCharPropRead_c))
        VALUE(value_battery_level, gBleSig_BatteryLevel_d, (gPermissionFlagReadable_c), 1, 0x5A)
        DESCRIPTOR(desc_bat_level, gBleSig_CharPresFormatDescriptor_d, (gPermissionFlagReadable_c), 7, 0x04, 0x00, 0xAD, 0x27, 0x01, 0x01, 0x00)
        CCCD(cccd_battery_level)

PRIMARY_SERVICE(service_hid, 0x1812)
    CHARACTERISTIC(char_protocol_mode, 0x2A4E, (gGattCharPropRead_c | gGattCharPropWriteWithoutRsp_c) )
        VALUE(value_protocol_mode, 0x2A4E, (gPermissionFlagReadable_c | gPermissionFlagWritable_c), 1, 0x01)
    CHARACTERISTIC(char_report_map, 0x2A4B, (gGattCharPropRead_c) )
        VALUE(value_report_map, 0x2A4B, (gPermissionFlagReadable_c), 50, 0x05, 0x01, 0x09, 0x02, 0xa1, 0x01, 0x09, 0x01, 0xa1, 0x00, 0x05, 0x09, 0x19, 0x01, 0x29, 0x03, 0x15, 0x00, 0x25, 0x01, 0x95, 0x03, 0x75, 0x01, 0x81, 0x02, 0x95, 0x01, 0x75, 0x05, 0x81, 0x03, 0x05, 0x01, 0x09, 0x30, 0x09, 0x31, 0x15, 0x81, 0x25, 0x7f, 0x75, 0x08, 0x95, 0x02, 0x81, 0x06, 0xc0, 0xc0)
    CHARACTERISTIC(char_report, gBleSig_Report_d, (gGattCharPropRead_c | gGattCharPropNotify_c | gGattCharPropWrite_c) )
        VALUE_VARLEN(value_report, gBleSig_Report_d, (gPermissionFlagReadable_c | gPermissionFlagWritable_c), 3, 3, 0x00, 0x00, 0x00)
        CCCD(cccd_report)
        DESCRIPTOR(desc_report_ref, 0x2908, (gPermissionFlagReadable_c), 2, 0x00, 0x01)
    CHARACTERISTIC(char_hid_information, gBleSig_HidInformation_d, (gGattCharPropRead_c) )
        VALUE(value_hid_information, gBleSig_HidInformation_d, (gPermissionFlagReadable_c), 4, 0x13, 0x02, 0x40, 0x01)
    CHARACTERISTIC(char_boot_mouse_input_report, 0x2A33, (gGattCharPropRead_c | gGattCharPropNotify_c | gGattCharPropWrite_c) )
        VALUE_VARLEN(value_boot_mouse_input_report, 0x2A33, (gPermissionFlagReadable_c | gPermissionFlagWritable_c), 3, 3, 0x00, 0x00, 0x00)
        CCCD(cccd_boot_mouse_input_report)
    CHARACTERISTIC(char_hid_control_point, gBleSig_HidCtrlPoint_d, (gGattCharPropWriteWithoutRsp_c) )
        VALUE(value_hid_control_point, gBleSig_HidCtrlPoint_d, (gPermissionFlagWritable_c), 1, 0x00)