#include <iostream>
#include <map>
#include <string>

std::map<std::string, int> mergeMaps(
    const std::map<std::string, int>& map1,
    const std::map<std::string, int>& map2
) {
    std::map<std::string, int> result = map1; 

    for (const auto& pair : map2) {
        result[pair.first] += pair.second;
    }

    return result;
}

int main() {
    std::map<std::string, int> map1 = {
        {"a", 1}, {"b", 2}, {"c", 3}
    };

    std::map<std::string, int> map2 = {
        {"b", 3}, {"c", 4}, {"d", 5}
    };

    auto result = mergeMaps(map1, map2);

    for (const auto& p : result) {
        std::cout << p.first << ": " << p.second << "\n";
    }
}
