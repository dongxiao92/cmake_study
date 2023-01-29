# Set the minimum version of CMake that can be used
cmake_minimum_required( VERSION 3.16)

# Set project name
project ( liba )

message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DOR = ${PROJECT_SOURCE_DIR}" )

# Define a variable for sources of a static lib
set ( LIBA_SOURCES 
        a.cpp
)

# Define a static library target
add_library( static_liba STATIC
        ${LIBA_SOURCES}
)
# Directories which should be included for target static_liba
target_include_directories( static_liba
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
# Define a shared library target
add_library( shared_liba SHARED
        ${LIBA_SOURCES}
)
# Directories which should be included for target shared_lib_s
target_include_directories( shared_liba
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)