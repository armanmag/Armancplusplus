#include <iostream>
#include <string>
#include <stdexcept>

template <typename T, std::size_t N>
class FixedArray {
private:
    T data[N];

public:
    void set(std::size_t index, const T& value) {
        if (index >= N) {
            throw std::out_of_range("Index out of bounds");
        }
        data[index] = value;
    }

    T get(std::size_t index) const {
        if (index >= N) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    std::size_t size() const {
        return N;
    }

    void print() const {
        std::cout << "[";
        for (std::size_t i = 0; i < N; ++i) {
            std::cout << data[i];
            if (i < N - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    FixedArray<int, 5> intArr;
    for (int i = 0; i < intArr.size(); ++i) {
        intArr.set(i, i * 2);
    }
    intArr.print();

    FixedArray<double, 3> doubleArr;
    doubleArr.set(0, 3.14);
    doubleArr.set(1, 2.71);
    doubleArr.set(2, 1.618);
    doubleArr.print();

    FixedArray<std::string, 4> stringArr;
    stringArr.set(0, "apple");
    stringArr.set(1, "banana");
    stringArr.set(2, "cherry");
    stringArr.set(3, "date");
    stringArr.print();

    std::cout << "Element at index 2: " << stringArr.get(2) << std::endl;

    return 0;
}
