#include <iostream>
#include <string>

template <typename T>
void printOne(T&& arg) {
    if constexpr (std::is_lvalue_reference<decltype(arg)>::value) {
        std::cout << arg << " [lvalue]\n";
    } else {
        std::cout << arg << " [rvalue]\n";
    }
}

template <typename... Args>
void betterPrint(Args&&... args) {
    (printOne(std::forward<Args>(args)), ...);
}


int main() {
    int x = 42;
    std::string s = "hello";
    betterPrint(x, 100, s, "world");
    betterPrint(std::string("temporary"));

    return 0;
}

