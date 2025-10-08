#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
T sumArray(T* arr, int size) {
    T sum = T();
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    std::cout << "Sum of int array: " << sumArray(intArr, intSize) << std::endl;

    double doubleArr[] = {1.5, 2.5, 3.0, 4.25};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sum of double array: " << sumArray(doubleArr, doubleSize) << std::endl;

    std::string strArr[] = {"Hello", " ", "World", "!"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    std::cout << "Sum of string array: " << sumArray(strArr, strSize) << std::endl;

    return 0;
}
