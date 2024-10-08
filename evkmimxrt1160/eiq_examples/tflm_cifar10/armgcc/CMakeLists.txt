# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 3.10.0)

# THE VERSION NUMBER
SET (MCUXPRESSO_CMAKE_FORMAT_MAJOR_VERSION 2)
SET (MCUXPRESSO_CMAKE_FORMAT_MINOR_VERSION 0)

include(ide_overrides.cmake OPTIONAL)

if(CMAKE_SCRIPT_MODE_FILE)
  message("${MCUXPRESSO_CMAKE_FORMAT_MAJOR_VERSION}")
  return()
endif()


# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

if (DEFINED ENV{SdkRootDirPath})
    SET(SdkRootDirPath "$ENV{SdkRootDirPath}")
else()
    SET(SdkRootDirPath "${ProjDirPath}/../../../../..")
endif()

SET(EXECUTABLE_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})
SET(LIBRARY_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})


project(tflm_cifar10_cm7)

set(MCUX_BUILD_TYPES flexspi_nor_sdram_release flexspi_nor_sdram_debug)

set(MCUX_SDK_PROJECT_NAME tflm_cifar10_cm7.elf)

if (NOT DEFINED SdkRootDirPath)
    SET(SdkRootDirPath ${SdkRootDirPath})
endif()

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME} 
"${ProjDirPath}/../source/image/image_conv_rotate.c"
"${ProjDirPath}/../source/demo_info.h"
"${ProjDirPath}/../source/image/image.h"
"${ProjDirPath}/../source/image/image_decode_raw.c"
"${ProjDirPath}/../source/image/image_utils.h"
"${ProjDirPath}/../source/model/get_top_n.cpp"
"${ProjDirPath}/../source/model/get_top_n.h"
"${ProjDirPath}/../source/model/model.h"
"${ProjDirPath}/../source/model/output_postproc.h"
"${ProjDirPath}/../source/model/output_postproc.cpp"
"${ProjDirPath}/../source/demo_config.h"
"${ProjDirPath}/../source/demo_info.cpp"
"${ProjDirPath}/../source/image/image_data.h"
"${ProjDirPath}/../source/labels.h"
"${ProjDirPath}/../source/model/model.cpp"
"${ProjDirPath}/../source/main.cpp"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../source/model/model_cifarnet_ops_micro.cpp"
"${ProjDirPath}/../source/model/model_data.h"
"${ProjDirPath}/../source/image/image_capture.c"
"${ProjDirPath}/../source/image/image_draw.c"
"${ProjDirPath}/../source/image/image_resize_nearest.c"
"${ProjDirPath}/../source/timer.h"
"${ProjDirPath}/../source/timer.c"
"${ProjDirPath}/../board_init.c"
"${ProjDirPath}/../board_init.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../source/common/eiq_common.h"
"${ProjDirPath}/../source/common/eiq_iui.h"
"${ProjDirPath}/../source/common/eiq_iworker.h"
"${ProjDirPath}/../source/video/eiq_camera_conf.c"
"${ProjDirPath}/../source/video/eiq_display_conf.c"
"${ProjDirPath}/../source/video/eiq_camera.h"
"${ProjDirPath}/../source/video/eiq_camera_conf.h"
"${ProjDirPath}/../source/video/eiq_display.h"
"${ProjDirPath}/../source/video/eiq_display_conf.h"
"${ProjDirPath}/../source/video/eiq_pxp.h"
"${ProjDirPath}/../source/video/eiq_video_worker.h"
"${ProjDirPath}/../source/video/eiq_camera.c"
"${ProjDirPath}/../source/video/eiq_display.c"
"${ProjDirPath}/../source/video/eiq_pxp.c"
"${ProjDirPath}/../source/video/eiq_video_worker.c"
"${ProjDirPath}/../source/gprintf/chgui.h"
"${ProjDirPath}/../source/gprintf/font.h"
"${ProjDirPath}/../source/gprintf/chgui.c"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../dcd.c"
"${ProjDirPath}/../dcd.h"
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${ProjDirPath}/../source
    ${ProjDirPath}/../source/image
    ${ProjDirPath}/../source/model
    ${ProjDirPath}/..
    ${ProjDirPath}/../source/common
    ${ProjDirPath}/../source/video
    ${ProjDirPath}/../source/gprintf
)


include(${SdkRootDirPath}/core/devices/MIMXRT1166/all_lib_device.cmake)

IF(NOT DEFINED TARGET_LINK_SYSTEM_LIBRARIES)  
    SET(TARGET_LINK_SYSTEM_LIBRARIES "-lm -lc -lgcc -lnosys")  
ENDIF()  

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE ${TARGET_LINK_SYSTEM_LIBRARIES})

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)

set_target_properties(${MCUX_SDK_PROJECT_NAME} PROPERTIES ADDITIONAL_CLEAN_FILES "output.map")

