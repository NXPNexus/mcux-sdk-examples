IF(NOT DEFINED FPU)  
    SET(FPU "-mfloat-abi=hard -mfpu=fpv5-sp-d16")  
ENDIF()  

IF(NOT DEFINED SPECS)  
    SET(SPECS "--specs=nano.specs --specs=nosys.specs")  
ENDIF()  

IF(NOT DEFINED DEBUG_CONSOLE_CONFIG)  
    SET(DEBUG_CONSOLE_CONFIG "-DSDK_DEBUGCONSOLE_UART=1")  
ENDIF()  

SET(CMAKE_ASM_FLAGS_DEBUG " \
    ${CMAKE_ASM_FLAGS_DEBUG} \
    -DDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -g \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
    ${FPU} \
")
SET(CMAKE_ASM_FLAGS_RELEASE " \
    ${CMAKE_ASM_FLAGS_RELEASE} \
    -DNDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
    ${FPU} \
")
SET(CMAKE_C_FLAGS_DEBUG " \
    ${CMAKE_C_FLAGS_DEBUG} \
    -include ${ProjDirPath}/../app_bluetooth_config.h \
    -DDEBUG \
    -DCPU_MCXN547VDF_cm33_core0 \
    -DAPPL_USE_STANDARD_IO \
    -DGATT_CLIENT \
    -DGATT_DB \
    -DFSL_DRIVER_TRANSFER_DOUBLE_WEAK_IRQ=0 \
    -DFSL_OSA_MAIN_FUNC_ENABLE=0 \
    -DHAL_UART_ADAPTER_FIFO=1 \
    -DFSL_FEATURE_FLASH_PAGE_SIZE_BYTES=8192 \
    -DUSE_RTOS=1 \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_TASK_ENABLE=1 \
    -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING=1 \
    -DCFG_BLE \
    -DSDIO_ENABLED=1 \
    -DLFS_NO_INTRINSICS=1 \
    -DLFS_NO_ERROR=1 \
    -DCONFIG_ARM=1 \
    -DMFLASH_BASE_ADDRESS=0 \
    -DEDGEFAST_BT_LITTLEFS_MFLASH \
    -DHAL_UART_DMA_ENABLE=1 \
    -DLPFLEXCOMM_INIT_NOT_USED_IN_DRIVER=1 \
    -DMCUXPRESSO_SDK \
    -DLOG_ENABLE_ASYNC_MODE=1 \
    -DLOG_MAX_ARGUMENT_COUNT=10 \
    -DLOG_ENABLE_OVERWRITE=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMFLASH_FILE_BASEADDR=131072 \
    -DMBEDTLS_MCUX_ELS_PKC_API \
    -DMBEDTLS_MCUX_USE_PKC \
    -DOSA_USED \
    -DLWIP_DNS=1 \
    -DLWIP_NETIF_HOSTNAME=1 \
    -DLWIP_IGMP=1 \
    -D_XOPEN_SOURCE=500 \
    -DMBEDTLS_MCUX_ELS_API \
    -DMBEDTLS_MCUX_USE_ELS \
    -DMCUXCL_FEATURE_CSSL_MEMORY_C_FALLBACK \
    -g \
    -O0 \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
    -fomit-frame-pointer \
    -Wno-unused-function \
    ${FPU} \
    ${DEBUG_CONSOLE_CONFIG} \
")
SET(CMAKE_C_FLAGS_RELEASE " \
    ${CMAKE_C_FLAGS_RELEASE} \
    -include ${ProjDirPath}/../app_bluetooth_config.h \
    -DNDEBUG \
    -DCPU_MCXN547VDF_cm33_core0 \
    -DAPPL_USE_STANDARD_IO \
    -DGATT_CLIENT \
    -DGATT_DB \
    -DFSL_DRIVER_TRANSFER_DOUBLE_WEAK_IRQ=0 \
    -DFSL_OSA_MAIN_FUNC_ENABLE=0 \
    -DHAL_UART_ADAPTER_FIFO=1 \
    -DFSL_FEATURE_FLASH_PAGE_SIZE_BYTES=8192 \
    -DUSE_RTOS=1 \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_TASK_ENABLE=1 \
    -DDEBUG_CONSOLE_TRANSFER_NON_BLOCKING=1 \
    -DCFG_BLE \
    -DSDIO_ENABLED=1 \
    -DLFS_NO_INTRINSICS=1 \
    -DLFS_NO_ERROR=1 \
    -DCONFIG_ARM=1 \
    -DMFLASH_BASE_ADDRESS=0 \
    -DEDGEFAST_BT_LITTLEFS_MFLASH \
    -DHAL_UART_DMA_ENABLE=1 \
    -DLPFLEXCOMM_INIT_NOT_USED_IN_DRIVER=1 \
    -DMCUXPRESSO_SDK \
    -DLOG_ENABLE_ASYNC_MODE=1 \
    -DLOG_MAX_ARGUMENT_COUNT=10 \
    -DLOG_ENABLE_OVERWRITE=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMFLASH_FILE_BASEADDR=131072 \
    -DMBEDTLS_MCUX_ELS_PKC_API \
    -DMBEDTLS_MCUX_USE_PKC \
    -DOSA_USED \
    -DLWIP_DNS=1 \
    -DLWIP_NETIF_HOSTNAME=1 \
    -DLWIP_IGMP=1 \
    -D_XOPEN_SOURCE=500 \
    -DMBEDTLS_MCUX_ELS_API \
    -DMBEDTLS_MCUX_USE_ELS \
    -DMCUXCL_FEATURE_CSSL_MEMORY_C_FALLBACK \
    -Os \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
    -fomit-frame-pointer \
    -Wno-unused-function \
    ${FPU} \
    ${DEBUG_CONSOLE_CONFIG} \
")
SET(CMAKE_CXX_FLAGS_DEBUG " \
    ${CMAKE_CXX_FLAGS_DEBUG} \
    -DDEBUG \
    -DCPU_MCXN547VDF_cm33_core0 \
    -DMCUXPRESSO_SDK \
    -DSERIAL_PORT_TYPE_UART=1 \
    -g \
    -O0 \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
    ${FPU} \
    ${DEBUG_CONSOLE_CONFIG} \
")
SET(CMAKE_CXX_FLAGS_RELEASE " \
    ${CMAKE_CXX_FLAGS_RELEASE} \
    -DNDEBUG \
    -DCPU_MCXN547VDF_cm33_core0 \
    -DMCUXPRESSO_SDK \
    -DSERIAL_PORT_TYPE_UART=1 \
    -Os \
    -mcpu=cortex-m33 \
    -Wall \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
    ${FPU} \
    ${DEBUG_CONSOLE_CONFIG} \
")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG " \
    ${CMAKE_EXE_LINKER_FLAGS_DEBUG} \
    -g \
    -mcpu=cortex-m33 \
    -Wall \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    ${FPU} \
    ${SPECS} \
    -T\"${ProjDirPath}/MCXN547_cm33_core0_flash.ld\" -static \
")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE " \
    ${CMAKE_EXE_LINKER_FLAGS_RELEASE} \
    -mcpu=cortex-m33 \
    -Wall \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    ${FPU} \
    ${SPECS} \
    -T\"${ProjDirPath}/MCXN547_cm33_core0_flash.ld\" -static \
")
