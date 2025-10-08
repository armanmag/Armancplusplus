#include <iostream>
#include <string>

template<typename T>
void printElement(const T& value) {
    std::cout << value << std::endl;
}

int main() {
    printElement(42);
    printElement(3.14);
    printElement("Hello!");

    std::string s = "Hi from std::string";
    printElement(s);

    printElement(true);

    return 0;
}
