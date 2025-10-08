#include <iostream>
#include <cstring>
#include <string>

template <typename T>
bool isEqual(const T& a, const T& b) {
    return a == b;
}

template <>
bool isEqual<const char*>(const char* const& a, const char* const& b) {
    if (a == nullptr || b == nullptr) return false;
    return std::strcmp(a, b) == 0;
}

int main() {
    int x = 5, y = 5;
    std::cout << "int: " << std::boolalpha << isEqual(x, y) << std::endl;

    double a = 3.14, b = 2.71;
    std::cout << "double: " << isEqual(a, b) << std::endl;

    std::string s1 = "hello", s2 = "hello";
    std::cout << "std::string: " << isEqual(s1, s2) << std::endl;

    const char* c1 = "world";
    const char* c2 = "world";
    std::cout << "const char*: " << isEqual(c1, c2) << std::endl;

    const char* c3 = "foo";
    const char* c4 = "bar";
    std::cout << "const char* (разные): " << isEqual(c3, c4) << std::endl;

    return 0;
}
