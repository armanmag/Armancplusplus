#include <iostream>
#include <string>

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void printSwapResult(const T& a, const T& b, const std::string& label) {
    std::cout << label << ": a = " << a << ", b = " << b << std::endl;
}

int main() {
    int x = 10;
    int y = 20;
    printSwapResult(x, y, "Before swap (int)");
    mySwap(x, y);
    printSwapResult(x, y, "After swap (int)");

    std::cout << std::endl;

    double d1 = 3.14;
    double d2 = 2.71;
    printSwapResult(d1, d2, "Before swap (double)");
    mySwap(d1, d2);
    printSwapResult(d1, d2, "After swap (double)");

    std::cout << std::endl;

    std::string s1 = "Hello";
    std::string s2 = "World";
    printSwapResult(s1, s2, "Before swap (string)");
    mySwap(s1, s2);
    printSwapResult(s1, s2, "After swap (string)");

    return 0;
}
