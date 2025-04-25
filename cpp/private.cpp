#include <iostream>

class Employee {
private:
    int salary; 
public: 
    // Constructor to initialize salary
    Employee(int sal) : salary(sal) {}

    // Declare Manager as a friend to allow access to private members
    friend class Manager; 
};

class Manager {
public:
    // Method to promote an employee by increasing their salary by 10%
    void promoteEmployee(Employee &emp) {
        emp.salary *= 1.1; // Accessing the private 'salary' directly
    }
};

int main() {
    Employee emp(1000); // Create an Employee with a salary of 1000
    Manager mgr; // Create a Manager

    std::cout << "Salary before promotion: " << emp.salary << std::endl;
    mgr.promoteEmployee(emp); // Promote the employee
    std::cout << "Salary after promotion: " << emp.salary << std::endl;

    return 0;
}