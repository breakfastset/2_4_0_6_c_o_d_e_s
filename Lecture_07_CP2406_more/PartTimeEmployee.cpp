#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(int empId, const string &name, double salary, int numDaysWorked)
    : Employee(empId, name, salary){
    this->numDaysWorked = numDaysWorked;
}

double PartTimeEmployee::getAnnualSalary() const {
    return salary * numDaysWorked;
}
