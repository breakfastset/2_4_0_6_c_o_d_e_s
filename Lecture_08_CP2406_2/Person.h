//
// Created by kangl on 20/3/2026.
//

#ifndef LECTURE_08_CP2406_2_PERSON_H
#define LECTURE_08_CP2406_2_PERSON_H
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    Person(){}
    Person(string name, int age);
    string getName();
    int getAge();
    // virtual int getPriority() = 0;  // abstract method
    // pure virtual function
};

#endif //LECTURE_08_CP2406_2_PERSON_H