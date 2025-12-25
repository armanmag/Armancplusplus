#include <iostream>
#include <vector>
#include <map>
#include <string>

std::map<char, std::vector<std::string>> groupByFirstChar(
    const std::vector<std::string>& words
) {
    std::map<char, std::vector<std::string>> groups;

    for (const std::string& word : words) {
        if (!word.empty()) {
            char first = word[0];          
            groups[first].push_back(word); 
        }
    }

    return groups;
}

int main() {
    std::vector<std::string> words = {
        "apple", "banana", "apricot", "cherry", "avocado"
    };

    auto result = groupByFirstChar(words);

    for (const auto& pair : result) {
        std::cout << pair.first << ": ";
        for (const auto& word : pair.second) {
            std::cout << word << " ";
        }
        std::cout << "\n";
    }
}
