cmake_minimum_required(VERSION 3.9.0)
project (snails)

# General Config
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/sdl/")

# Link Directories & Files
find_package(SDL2 REQUIRED)

# Include Directories
include_directories(
    ../include
    ${SDL2_INCLUDE_DIR}
    )

# Sources
file(GLOB SOURCES "../src/*.cpp")

#Executable
add_executable(snails ${SOURCES})
target_link_libraries(snails ${SDL2_LIBRARY})