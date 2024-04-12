add_library( LIB
             SHARED
             p2.cpp
             )

target_link_libraries(LIB $<TARGET_OBJECTS:TESTP1>)