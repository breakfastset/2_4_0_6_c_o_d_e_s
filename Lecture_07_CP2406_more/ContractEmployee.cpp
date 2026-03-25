#include "ContractEmployee.h"

ContractEmployee::ContractEmployee(int empId, const string &name, double salary, double signBonus)
    : Employee(empId, name, salary)
{
    this->signUpBonus = signBonus;
}

double ContractEmployee::getAnnualSalary() const {
    return Employee::getAnnualSalary() + signUpBonus/4;
}


