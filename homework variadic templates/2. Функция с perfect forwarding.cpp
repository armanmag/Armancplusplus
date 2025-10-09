#include <iostream>
#include <string>


class Person {
    std::string name;
    int age;
public:
    Person(std::string n, int a) : name(std::move(n)), age(a) {}
    void print() const {
        std::cout << "Name: " << name << ", Age: " << age << '\n';
    }
};

template <typename T, typename... Args>
T makeObject(Args&&... args) {
    return T(std::forward<Args>(args)...);
}

int main() {

    auto person = makeObject<Person>("Alice", 25);
    person.print();

    std::string name = "Bob";
    int age = 30;
    auto person2 = makeObject<Person>(name, age);
    person2.print();

    return 0;
}


