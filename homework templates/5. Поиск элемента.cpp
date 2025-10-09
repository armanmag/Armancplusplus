#include <iostream>
#include <vector>
#include <string>

template <typename T>
int linearSearch(const std::vector<T>& vec, const T& value) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> intVec = {10, 20, 30, 40, 50};
    int intTarget = 30;
    int intIndex = linearSearch(intVec, intTarget);
    std::cout << "Index of " << intTarget << " in intVec: " << intIndex << "\n";

    std::vector<double> doubleVec = {1.1, 2.2, 3.3, 4.4};
    double doubleTarget = 3.3;
    int doubleIndex = linearSearch(doubleVec, doubleTarget);
    std::cout << "Index of " << doubleTarget << " in doubleVec: " << doubleIndex << "\n";

    std::vector<std::string> stringVec = {"apple", "banana", "cherry", "date"};
    std::string stringTarget = "cherry";
    int stringIndex = linearSearch(stringVec, stringTarget);
    std::cout << "Index of \"" << stringTarget << "\" in stringVec: " << stringIndex << "\n";

    std::string notFound = "kiwi";
    int nfIndex = linearSearch(stringVec, notFound);
    std::cout << "Index of \"" << notFound << "\" in stringVec: " << nfIndex << "\n";

    return 0;
}
