#include "hello_world.h"

#include "hello.h"
#if ENABLE_DEP_WORLD
#include "world.h"
#endif

namespace HELLO_WORLD_NS {

void hello_world() {
    ::HELLO_NS::hello();
#if ENABLE_DEP_WORLD
    ::WORLD_NS::world();
#else
    std::cout << "world!(own impl)";
#endif
    std::cout << std::endl;
}

void hello_world_end(const std::string& msg) {
    ::HELLO_NS::hello();
#if ENABLE_DEP_WORLD
    ::WORLD_NS::world_end(msg);
#else
    std::cout << "world(own impl)";
    if (msg.size() > 0) {
        std::cout <<", " << msg;
    }
#endif
    std::cout << std::endl;
}

}