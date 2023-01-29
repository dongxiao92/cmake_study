# Set the minimum version of CMake that can be used
cmake_minimum_required( VERSION 3.16)

# Set project name
project ( main )

message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DOR = ${PROJECT_SOURCE_DIR}" )

# add sub-directory
add_subdirectory(${PROJECT_SOURCE_DIR}/liba)
add_subdirectory(${PROJECT_SOURCE_DIR}/libb)

# Define a variable for sources of executable
set ( EXE_SOURCES
        main.cpp
)

# Define a executable target
add_executable( main ${EXE_SOURCES})

# Link steps for target hello_cmake_exe
target_link_libraries( main
        PRIVATE shared_liba
        PRIVATE static_libb
)