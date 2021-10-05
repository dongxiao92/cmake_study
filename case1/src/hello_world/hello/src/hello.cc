#include <iostream>
#include "hello.h"

namespace HELLO_NS{

void hello() {
    std::string tmp;
    ::HELLO_NS::hello_(tmp);
    std::cout << tmp;
}

}