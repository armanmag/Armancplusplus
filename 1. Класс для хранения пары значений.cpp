#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& a, const T2& b) : first(a), second(b) {}

    void print() const {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    void setFirst(const T1& value) { first = value; }
    void setSecond(const T2& value) { second = value; }
};

int main() {
    Pair<int, double> p1(5, 3.14);
    p1.print();

    Pair<std::string, int> p2("age", 30);
    p2.print();

    Pair<double, std::string> p3(1.618, "phi");
    p3.print();

    std::cout << "First element of p2: " << p2.getFirst() << std::endl;
    std::cout << "Second element of p2: " << p2.getSecond() << std::endl;

    return 0;
}
