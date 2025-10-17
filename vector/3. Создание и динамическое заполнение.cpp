//3
#include <iostream>  
#include <vector>    

std::vector<int> createVectorFromInput() {
    std::vector<int> vec;  

    int value;
    std::cout << "Введите числа (0 для завершения): ";


    while (std::cin >> value && value != 0) {
        vec.push_back(value);  
    }

    return vec;  
}

int main() {
    std::vector<int> inputVec = createVectorFromInput();

    std::cout << "Размер вектора: " << inputVec.size() << std::endl;

    std::cout << "Элементы вектора: ";
    for (int val : inputVec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
