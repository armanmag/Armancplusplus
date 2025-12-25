#include <iostream>
#include <vector>
#include <set>

std::vector<int> removeDuplicates(const std::vector<int>& nums) {
    std::set<int> unique;              

    for (int x : nums) {
        unique.insert(x);             
    }

    std::vector<int> result;          
    for (int x : unique) {             
        result.push_back(x);           
    }

    return result;                     
}

int main() {
    std::vector<int> nums = {4, 2, 5, 2, 3, 4, 1};

    auto result = removeDuplicates(nums);

    for (int x : result) {
        std::cout << x << " ";
    }
}
