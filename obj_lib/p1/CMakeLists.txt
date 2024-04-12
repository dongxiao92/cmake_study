add_library(TESTP1 OBJECT test.cpp test.hpp)
target_include_directories(TESTP1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})