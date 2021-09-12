cmake_minimum_required(VERSION 3.13)

project(hello_world)

add_subdirectory(hello)
add_subdirectory(world)

set(HELLO_WORLD_LIB_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/hello_world.cc)

add_library(hello_world SHARED
    ${HELLO_WORLD_LIB_SRCS})

target_include_directories(hello_world PUBLIC
                    ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(hello_world PRIVATE hello)
# PRIVATE: hello_world's srcs can see world's headers, and use libword's function
# but the user of hello_world cannot see world(either headers nor lib_world's function)
#target_link_libraries(hello_world PRIVATE world)
# INTERFACE: hello_world's srcs can see world's headers, but cannot use libword;s function
# while the user of hello_world can see both headers and function of libworld
# Also, setting INTERFACE here enables hello_world pass the world to the outers, 
# but if we don't set INTERFACE/PUBLIC for world,
# hello_world's users still cannot see world's headers
target_link_libraries(hello_world INTERFACE world)
# PUBLIC: both hello_world and its users wants world;s headers and libword's function
#target_link_libraries(hello_world PUBLIC world)