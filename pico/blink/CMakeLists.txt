#Set minimum required version of Cmake
cmake_minimum_required(VERSION 3.13)

# Include build functions from Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)


# Set name of project (as PROJECT_NAME) and C/C++ standards
project(mylearning C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


#Creates a pico-sdk subdirectory in our project for the libraries
pico_sdk_init()



# Tell CMake where to find the executable source file
add_executable(${PROJECT_NAME}
   mylearning.c
)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(${PROJECT_NAME})

# LInk to pico_stdlib (gpio, time, etc. functions)
target_link_libraries(${PROJECT_NAME}
pico_stdlib
)

#Enable usb output, disable uart output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

