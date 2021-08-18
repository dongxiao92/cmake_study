# Set the minimum version of CMake that can be used
cmake_minimum_required( VERSION 3.13)

# Set project name
project ( hello_cmake )

message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DOR = ${PROJECT_SOURCE_DIR}" )

# Define a variable for sources of a static lib
set ( STATIC_LIB_S_SOURCES 
        src/s.cc
)

set ( SHARED_LIB_S_SOURCES 
        src/s.cc
)

# Define a variable for sources of executable
set ( EXE_SOURCES
        src/main.cc
)

# Define a static library target
add_library( static_lib_s STATIC
        ${STATIC_LIB_S_SOURCES}
)
# Directories which should be included for target static_lib_s
target_include_directories( static_lib_s
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
# Define a shared library target
add_library( shared_lib_s SHARED
        ${SHARED_LIB_S_SOURCES}
)
# Directories which should be included for target shared_lib_s
target_include_directories( shared_lib_s
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Define a executable target
add_executable( hello_cmake_exe ${EXE_SOURCES})
# Directories which should be included for target hello_cmake_exe
target_include_directories( hello_cmake_exe
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
# Link steps for target hello_cmake_exe
target_link_libraries( hello_cmake_exe
        PRIVATE
        shared_lib_s
)