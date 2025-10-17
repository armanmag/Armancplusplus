//1
#include <iostream>      
#include <vector>  

void createAndFillVector(int N) {
    std::vector<int> vec(N);

    for (int i = 0; i < N; ++i) {
        vec[i] = i + 1;  
    }
    for (int i = 0; i < N; ++i) {
        std::cout << vec[i] << " ";
    }

    std::cout << "Vector size: " << vec.size() << std::endl;
    std::cout << "Vector capacity: " << vec.capacity() << std::endl;
}

int main() {
    int n;
    std::cin >> n;             
    createAndFillVector(n);    
    return 0;
}
