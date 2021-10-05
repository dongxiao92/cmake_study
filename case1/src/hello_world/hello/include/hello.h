#ifndef HELLO_H

#define HELLO_H

#include <iostream>
#include <string>
#include <sstream>

namespace HELLO_NS {

void hello();

void hello_(std::string& str) {
    std::stringstream ss;
    ss << "hello, ";
    str = ss.str();
}

}

#endif