#include <iostream>  
#include <string>     

template <typename T>
T copyValue(const T& value) {
    return value; 
}

template <typename T>
T* copyValue(T* ptr) {
    if (ptr == nullptr) {
        return nullptr; 
    }
    return new T(*ptr); 
}


int main() {
    int a = 10;
    int b = copyValue(a); // b = 10
    std::cout << "int: " << b << std::endl;


    double pi = 3.1415;
    double copyPi = copyValue(pi);
    std::cout << "double: " << copyPi << std::endl;

    std::string s = "hello";
    std::string sCopy = copyValue(s);
    std::cout << "string: " << sCopy << std::endl;

    int* p = new int(42);        
    int* pCopy = copyValue(p);    
    std::cout << "int pointer: " << *pCopy << std::endl;

    *p = 100;
    std::cout << "after change, original: " << *p << ", copy: " << *pCopy << std::endl;

    delete p;
    delete pCopy;

    return 0;
}

