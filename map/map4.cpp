#include <iostream>
#include <map>
#include <string>

int firstUniqueChar(const std::string& s) {
    std::map<char, int> freq;   

    for (char c : s) {
        freq[c]++;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (freq[s[i]] == 1) {
            return i;           
        }
    }

    return -1;                 
}

int main() {
    std::string s1 = "leetcode";
    std::cout << firstUniqueChar(s1) << "\n"; 

    std::string s2 = "loveleetcode";
    std::cout << firstUniqueChar(s2) << "\n";  
}
