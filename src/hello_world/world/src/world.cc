#if CHECK_API_CONSISTENCY
#include "world.h"
#endif
#include <iostream>
#include <string>

namespace WORLD_NS {

void world() {
    std::cout << "world";
}

void world_end(const std::string& msg) {
    std::cout << "world";
    if (msg.size() > 0) {
        std::cout <<", " << msg;
    }
}

}