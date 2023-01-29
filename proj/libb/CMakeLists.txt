# Set the minimum version of CMake that can be used
cmake_minimum_required( VERSION 3.16)

# Set project name
project ( libb )

message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DOR = ${PROJECT_SOURCE_DIR}" )

# Define a variable for sources of a static lib
set ( LIBB_SOURCES 
        b.cpp
)

# Define a static library target
add_library( static_libb STATIC
        ${LIBB_SOURCES}
)
# Directories which should be included for target static_libb
target_include_directories( static_libb
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
# Define a shared library target
add_library( shared_libb SHARED
        ${LIBB_SOURCES}
)
# Directories which should be included for target shared_lib_s
target_include_directories( shared_libb
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)