#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void print() const {
        std::cout << "Pair: " << first << ", " << second << std::endl;
    }
};

template <typename T>
class Pair<T, T> {
private:
    T first;
    T second;
public:
    Pair(T f, T s) : first(f), second(s) {}

    void print() const {
        std::cout << "Pair of identical types: " 
                  << first << ", " << second << std::endl;
    }
};

int main() {
    Pair<int, double> p1(10, 3.14);
    p1.print();

    Pair<std::string, int> p2("Age", 21);
    p2.print();

    Pair<int, int> p3(100, 200);
    p3.print();

    Pair<std::string, std::string> p4("hello", "world");
    p4.print();

    return 0;
}
