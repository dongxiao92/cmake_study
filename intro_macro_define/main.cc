#include <iostream>
#include <string>

void foo() {
#ifdef M1
    std::cout << "define macro M1" << std::endl;
#endif

#ifdef M2
    std::cout << "define macro M2" << std::endl;
#endif
}

void bar() {
#ifdef V1
    std::cout << "V1 is defined!" << std::endl;
#if V1
    std::cout << "V1 is valid!" << std::endl;
#endif
#endif
}

int main() {
    foo();
    bar();
    return 0;
}