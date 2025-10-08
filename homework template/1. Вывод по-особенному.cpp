#include <iostream>
#include <string>

template<typename T>
void printValue(const T& value) {
    std::cout << value << std::endl;
}

template<>
void printValue<bool>(const bool& value) {
    std::cout << (value ? "true" : "false") << std::endl;
}

template<>
void printValue<char*>(char* const& value) {
    std::cout << "\"" << value << "\"" << std::endl;
}

template<>
void printValue<const char*>(const char* const& value) {
    std::cout << "\"" << value << "\"" << std::endl;
}

int main() {
    int x = 42;
    std::cout << "Int: ";
    printValue(x);

    double d = 3.14;
    std::cout << "Double: ";
    printValue(d);

    std::string s = "hello";
    std::cout << "String: ";
    printValue(s);

    bool b = true;
    std::cout << "Bool: ";
    printValue(b);

    char text[] = "Hi there!";
    std::cout << "char*: ";
    printValue(text);

    const char* cstr = "This is const char*";
    std::cout << "const char*: ";
    printValue(cstr);

    return 0;
}
