
#include <iostream>  
#include <string>    

template<typename F, typename... Args>
void applyAndPrint(F func, Args... args) {
    ((std::cout << func(args) << std::endl), ...);
}

int square(int x) {
    return x * x;
}

std::string describe(int x) {
    return "Number: " + std::to_string(x);
}

int main() {
    applyAndPrint(square, 2, 3, 4, 5);
    applyAndPrint(describe, 1, 2, 3);


    return 0;
}
