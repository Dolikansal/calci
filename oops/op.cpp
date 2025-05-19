#include <iostream>
#include <string>

class Person {
    private:
        std::string name;
        int age;

    public:
        Person() : name(""), age(0) {}

        // Friend function declaration for overloading >>
        friend std::ostream& operator>>(std::ostream& out, const Person& p);

        // Friend function declaration for overloading <<
        friend std::istream& operator<<(std::istream& in, Person& p);
};

// Friend function definition for overloading >>
std::ostream& operator>>(std::ostream& out, const Person& p) {
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}

// Friend function definition for overloading <<
std::istream& operator<<(std::istream& in, Person& p) {
    std::cout << "Enter name: ";
    in >> p.name;
    std::cout << "Enter age: ";
    in >> p.age;
    return in;
}

int main() {
    Person person;

    // Using overloaded << operator to input values
    std::cin << person;

    // Using overloaded >> operator to output values
    std::cout >> person << std::endl;

    return 0;
}