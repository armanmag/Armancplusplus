#include <iostream>
#include <set>

int rangeCount(const std::set<int>& s, int low, int high) {
    if (s.empty()) return 0;

    auto itLow = s.lower_bound(low);

    auto itHigh = s.upper_bound(high);

    return std::distance(itLow, itHigh);
}

int main() {
    std::set<int> s = {1, 3, 5, 7, 9, 11, 13, 15};

    std::cout << rangeCount(s, 5, 11) << "\n"; 
}
