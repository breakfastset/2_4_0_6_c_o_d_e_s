#ifndef LECTURE_07_CP2406_MORE_CONTRACTEMPLOYEE_H
#define LECTURE_07_CP2406_MORE_CONTRACTEMPLOYEE_H
#include "Employee.h"

class ContractEmployee: public Employee {
public:
    ContractEmployee(int empId, const string& name, double salary, double signBonus);
    double getAnnualSalary() const;  /// override the parent's method

private:
    double signUpBonus;
};

#endif //LECTURE_07_CP2406_MORE_CONTRACTEMPLOYEE_H