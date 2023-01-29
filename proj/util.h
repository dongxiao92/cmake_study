#include <vector>
#include <iostream>

#include "a.h"
#include "b.h"

void run() {
    const int i = 4;
    const float f = 1.4f;

    if(func_a(i)) {
        std::cout << "func_a: 1" << std::endl;
    } else {
        std::cout << "func_a: 0" << std::endl;
    }

    if(func_b(f)) {
        std::cout << "func_b: 1" << std::endl;
    } else {
        std::cout << "func_b: 0" << std::endl;
    }

}