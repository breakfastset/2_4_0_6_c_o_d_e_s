#include "Person.h"

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}
