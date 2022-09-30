SET(CMAKE_ASM_FLAGS_FLASH_RELEASE " \
    -DNDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -mcpu=cortex-m4 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_FLASH_RELEASE " \
    -include ${ProjDirPath}/../wifi_config.h \
    -DNDEBUG \
    -DLWIP_TIMEVAL_PRIVATE=0 \
    -DCPU_88MW320_A0_NAPC \
    -DUSE_RTOS=1 \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DLWIP_NETIF_API=1 \
    -DHTTPSRV_CFG_WEBSOCKET_ENABLED=1 \
    -DHTTPSRV_CFG_DEFAULT_SES_CNT=8 \
    -DHTTPSRV_CFG_MBEDTLS_ENABLE=1 \
    -DSDK_DEBUGCONSOLE_UART \
    -DCONFIG_USE_PSM=1 \
    -DCONFIG_SECURE_PSM=1 \
    -DSDIO_ENABLED \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DFSL_RTOS_FREE_RTOS \
    -Os \
    -fomit-frame-pointer \
    -mcpu=cortex-m4 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_CXX_FLAGS_FLASH_RELEASE " \
    -DNDEBUG \
    -DCPU_88MW320_A0_NAPC \
    -DSERIAL_PORT_TYPE_UART=1 \
    -Os \
    -mcpu=cortex-m4 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_EXE_LINKER_FLAGS_FLASH_RELEASE " \
    -mcpu=cortex-m4 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
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
    -Xlinker \
    --defsym=__stack_size__=2048 \
    -Xlinker \
    --defsym=__heap_size__=1024 \
    -T${ProjDirPath}/88MW320_xx_xxxx_flash.ld -static \
")
