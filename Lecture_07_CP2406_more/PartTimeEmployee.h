//
// Created by kangl on 11/3/2026.
//

#ifndef LECTURE_07_CP2406_MORE_PARTTIMEEMPLOYEE_H
#define LECTURE_07_CP2406_MORE_PARTTIMEEMPLOYEE_H

#include "Employee.h"

class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(int empId, const string& name, double salary, int numDaysWorked);
    double getAnnualSalary() const;

private:
    int numDaysWorked;
};

#endif //LECTURE_07_CP2406_MORE_PARTTIMEEMPLOYEE_H