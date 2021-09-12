#include <iostream>

#include "s.h"
#include "hello_world.h"

#include "world.h"

int main() {
    ::hello_cmake();

    HELLO_WORLD_NS::hello_world();
    HELLO_WORLD_NS::hello_world_end("twice!");

    WORLD_NS::world();

    return 0;
}