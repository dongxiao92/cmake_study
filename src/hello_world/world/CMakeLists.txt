cmake_minimum_required( VERSION 3.13 )

project(world)

set ( WORLD_LIB_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/world.cc)

add_library(world STATIC ${WORLD_LIB_SRCS})
# we want world's user see world's headers, and world.cc doesn't need workld.h
# then, we can use INTERFACE
#target_include_directories( world INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include )
# we want world's user see world's headers, and world.cc needs workld.
# then, we need PUBLIC
target_include_directories(world PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#target_compile_options(world PRIVATE "-O3 -g")
target_compile_definitions(world PRIVATE "-D_GLIBCXX_USE_CXX11_ABI=0")
