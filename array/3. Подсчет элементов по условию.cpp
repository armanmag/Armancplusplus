//3
#include <iostream>
#include <array>


template <std::size_t N>
int countEven(const std::array<int, N>& arr) {
    int count = 0;

    for (std::size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            ++count; 
        }
    }

    return count; 
}

int main() {
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    int count = countEven<6>(arr);

    std::cout << "Количество четных чисел: " << count << std::endl; 

    return 0;
}
