#include <iostream>
#include <string>
#include <cmath>


template <typename T>
class Range {
private:
    T start;
    T end;

public:
    Range(T s, T e) : start(s), end(e) {}

    bool contains(const T& value) const {
        return value >= start && value <= end;
    }

    T length() const {
        return end - start;
    }

    void print() const {
        std::cout << "[" << start << ", " << end << "]" << std::endl;
    }
};

int main() {
    Range<int> intRange(3, 10);
    std::cout << "Integer range: ";
    intRange.print();
    std::cout << "Contains 5? " << (intRange.contains(5) ? "Yes" : "No") << std::endl;
    std::cout << "Length: " << intRange.length() << std::endl;

    std::cout << std::endl;

    Range<double> doubleRange(1.5, 4.2);
    std::cout << "Double range: ";
    doubleRange.print();
    std::cout << "Contains 2.3? " << (doubleRange.contains(2.3) ? "Yes" : "No") << std::endl;
    std::cout << "Length: " << doubleRange.length() << std::endl;

    std::cout << std::endl;

    Range<char> charRange('a', 'f');
    std::cout << "Char range: ";
    charRange.print();
    std::cout << "Contains 'c'? " << (charRange.contains('c') ? "Yes" : "No") << std::endl;
    std::cout << "Contains 'z'? " << (charRange.contains('z') ? "Yes" : "No") << std::endl;
    std::cout << "Length: " << static_cast<int>(charRange.length()) << std::endl;

    return 0;
}
