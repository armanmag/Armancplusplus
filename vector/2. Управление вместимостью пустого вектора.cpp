//2
#include <iostream>   
#include <vector>    

void workWithEmptyVector() {
    std::vector<int> vec;

    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i); 

        std::cout << "After push_back(" << i << "): ";
        std::cout << "Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;
    }

    std::cout << "Final vector elements: ";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

// Пример использования
int main() {
    workWithEmptyVector(); 
    return 0;
}
