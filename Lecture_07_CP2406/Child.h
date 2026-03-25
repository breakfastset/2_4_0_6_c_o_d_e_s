
#ifndef LECTURE_07_CP2406_CHILD_H
#define LECTURE_07_CP2406_CHILD_H

#include "Parent.h"

class Child: public Parent {
public:
    Child();
    ~Child();

private:
    int age;
};

#endif //LECTURE_07_CP2406_CHILD_H