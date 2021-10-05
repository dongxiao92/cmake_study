cmake_minimum_required(VERSION 3.15)

project(intro_macro)

set( SRCS main.cc)

add_executable(exe_with_m1 ${SRCS})
target_compile_definitions(exe_with_m1 PRIVATE 
    M1)

add_executable(exe_with_m2 ${SRCS})
target_compile_definitions(exe_with_m2 PRIVATE
    M2)

add_executable(exe_with_both ${SRCS})
target_compile_definitions(exe_with_both PRIVATE
    M1 M2)

add_executable(exe ${SRCS})

add_executable(exe_with_v1_0 ${SRCS})
target_compile_definitions(exe_with_v1_0 PRIVATE V1=0)

add_executable(exe_with_v1_1 ${SRCS})
target_compile_definitions(exe_with_v1_1 PRIVATE V1=1)