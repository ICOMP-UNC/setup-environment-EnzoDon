cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(
    "DynamicLib"
    VERSION 1.0.0
    DESCRIPTION "Shared Library Template for Operating Systems II"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} SHARED ${SOURCES})