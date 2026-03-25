#include <iostream>
#include <vector>
#include "Employee.h"
#include "ContractEmployee.h"
#include "PartTimeEmployee.h"

int main() {

    Employee normalEmployee(123, "Tinker", 5000);
    ContractEmployee contractEmployee(789, "Tham", 6000, 30000);
    PartTimeEmployee ptEmployee(6099, "Uncle", 120, 200);

    std::vector<Employee *> employees;

    Employee *employee = &normalEmployee;  // employee is a polymorphic reference
    std::cout << employee->getDetails() << std::endl;  // polymorphism in action
    employee = &contractEmployee;
    std::cout << employee->getDetails() << std::endl;
    employee = &ptEmployee;
    std::cout << employee->getDetails() << std::endl;

    employees.push_back(&normalEmployee);
    employees.push_back(&contractEmployee);
    employees.push_back(&ptEmployee);
    employees.push_back(new Employee(555, "Bing Bong", 8000));

    return 0;
}