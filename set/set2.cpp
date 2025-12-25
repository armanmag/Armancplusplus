#include <iostream>
#include <vector>
#include <set>

std::vector<int> findIntersection(const std::vector<int>& a, const std::vector<int>& b) {
    std::set<int> setA(a.begin(), a.end());  
    std::set<int> setB(b.begin(), b.end());   

    std::vector<int> result;

    const std::set<int>& smaller = (setA.size() < setB.size()) ? setA : setB;
    const std::set<int>& larger  = (setA.size() < setB.size()) ? setB : setA;

    for (int x : smaller) {
        if (larger.count(x)) {                
            result.push_back(x);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 4, 5, 6, 7};

    auto result = findIntersection(arr1, arr2);

    for (int x : result) {
        std::cout << x << " ";
    }
}
