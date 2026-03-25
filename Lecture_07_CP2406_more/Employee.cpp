#include "Employee.h"

Employee::Employee(int empId, const string &name, double salary) {
    this->empId = empId;
    this->name = name;
    this->salary = salary;
}

double Employee::getAnnualSalary() const {
    return salary * 13;
}

string Employee::getDetails() const {
    return name + "(" + std::to_string(empId) + ")'s annual salary: " + std::to_string(getAnnualSalary());
}
