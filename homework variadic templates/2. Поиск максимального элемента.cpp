#include <iostream>   
#include <string>       

template<typename T>
T findMax(const T& value) {
    return value;  
}

template<typename T, typename... Args>
T findMax(const T& first, const Args&... args) {
    T maxOfRest = findMax(args...);        
    return (first > maxOfRest) ? first : maxOfRest; 
}

int main() {

    int maxInt = findMax(3, 8, 2, 9, 5);
    std::cout << "Max int: " << maxInt << "\n";

    double maxDouble = findMax(1.5, 3.7, 0.9, 2.2);
    std::cout << "Max double: " << maxDouble << "\n";
    
    return 0;
}
