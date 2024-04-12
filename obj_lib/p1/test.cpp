#include "test.hpp"

void test_p1() {
    std::vector<std::string> v;
    v.push_back("test_p1");
    for (const auto& s : v) {
        std::cout << s << std::endl;
    }
}