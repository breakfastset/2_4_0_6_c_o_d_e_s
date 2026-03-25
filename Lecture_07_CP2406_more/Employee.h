//
// Created by kangl on 11/3/2026.
//

#ifndef LECTURE_07_CP2406_MORE_EMPLOYEE_H
#define LECTURE_07_CP2406_MORE_EMPLOYEE_H
#include <string>

using std::string;

class Employee {
public:
    Employee(int empId, const string& name, double salary);
    virtual ~Employee() {};
    virtual double getAnnualSalary() const;   // for method overriding
    virtual string getDetails() const;
    // virtual double getBonus() const = 0; // pure virtual function / abstract method

protected:
    int empId;
    string name;
    double salary;
};

#endif //LECTURE_07_CP2406_MORE_EMPLOYEE_H