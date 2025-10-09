#include <iostream>  
#include <string>    

template <typename T>
T sum(T value) {
    return value;  
}


template <typename T, typename... Args>
T sum(T first, Args... rest) {
    return first + sum(rest...); 
}

int main() {
    int result1 = sum(1, 2, 3, 4, 5);
    std::cout << "Sum of ints: " << result1 << std::endl;

    double result2 = sum(1.5, 2.3, 3.2);
    std::cout << "Sum of doubles: " << result2 << std::endl; 

    float result3 = sum(1.0f, 2.5f, 3); 
    std::cout << "Sum of floats: " << result3 << std::endl;

    return 0;
}
