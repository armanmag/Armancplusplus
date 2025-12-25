#include <iostream>
#include <vector>
#include <map>

std::map<int, int> countFrequency(const std::vector<int>& nums) {
    std::map<int, int> freq;      

    for (int x : nums) {
        freq[x]++;               
    }
    
    return freq;
}

int main() {
    std::vector<int> nums = {4, 2, 3, 4, 2, 3, 4, 3, 1, 4};

    auto result = countFrequency(nums);

    for (auto& p : result) {
        std::cout << p.first << ": " << p.second << "\n";
    }
}
