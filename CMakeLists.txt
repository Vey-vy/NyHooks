cmake_minimum_required(VERSION 3.20)

project(NyHooks CXX ASM_MASM)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(CMAKE_ASM_COMPILER_TARGET "${CMAKE_CXX_COMPILER_TARGET}")
set(LIBS_DIR "${PROJECT_SOURCE_DIR}/libs")

message("\nFetching modules")
include(cmake/minhook.cmake)
include(cmake/imgui.cmake)

message(STATUS "NyHooks")
file(GLOB_RECURSE SRC_MAIN
    "${SRC_DIR}/**.hpp"
    "${SRC_DIR}/**.h"
    "${SRC_DIR}/**.cpp"
    "${SRC_DIR}/**.cc"
    "${SRC_DIR}/**.cxx"
    "${SRC_DIR}/**.asm"
)
add_library(NyHooks MODULE "${SRC_MAIN}")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET NyHooks PROPERTY CXX_STANDARD 23)

source_group(TREE ${SRC_DIR} PREFIX "src" FILES ${SRC_MAIN})

target_include_directories(NyHooks PRIVATE
    "${SRC_DIR}"
    "${json_SOURCE_DIR}/single_include"
    "${imgui_SOURCE_DIR}"
    "${sdl2_SOURCE_DIR}/include"
    "${vulkan_SOURCE_DIR}/include"
)

target_precompile_headers(NyHooks PRIVATE "${SRC_DIR}/pch.hpp")

if(CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    target_compile_definitions(NyHooks PRIVATE "DEV_BUILD")
endif()

target_link_libraries(NyHooks PRIVATE minhook dbghelp imgui)

set_property(TARGET NyHooks PROPERTY COMPILE_WARNING_AS_ERROR ON)

target_compile_definitions(NyHooks
    PRIVATE "_CRT_SECURE_NO_WARNINGS"
    PRIVATE "NOMINMAX"
    PRIVATE "WIN32_LEAN_AND_MEAN"
    PRIVATE "/NODEFAULTLIB:LIBCMT"
    NY_EXPORTS
)