cmake_minimum_required( VERSION 3.13 )

project(hello)

set ( HELLO_LIB_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/hello.cc 
)

add_library( hello SHARED ${HELLO_LIB_SRC} )
# we want hello's users see headers and hello.cc/libhello heed the headers,
# so, we use PUBLIC
target_include_directories( hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include )

#target_compile_options(hello PRIVATE "-O0 -g")