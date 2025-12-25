#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(
    const std::vector<std::string>& words
) {

    std::map<std::string, std::vector<std::string>> groups;

    for (const std::string& word : words) {
        std::string key = word;          
        std::sort(key.begin(), key.end()); 

        groups[key].push_back(word);     
    }

   
    std::vector<std::vector<std::string>> result;
    for (auto& pair : groups) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    std::vector<std::string> words = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };

    auto result = groupAnagrams(words);

    for (const auto& group : result) {
        for (const auto& word : group) {
            std::cout << word << " ";
        }
        std::cout << "\n";
    }
}
