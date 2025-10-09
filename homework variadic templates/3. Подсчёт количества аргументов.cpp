#include <iostream>

int countArgs() {
 return 0;
}

template <typename T, typename... Rest>
int countArgs(T first, Rest... rest) {
 return countArgs(rest...) + 1;
}

int main() {
 std::cout << countArgs(4, 8, 1, 3, 7, 183, 195 ,90) << std::endl;
 std::cout << countArgs("C", "D", 2, 3, 4, 8.4) << std::endl;
 return 0;
}