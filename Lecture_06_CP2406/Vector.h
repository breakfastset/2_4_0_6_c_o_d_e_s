#ifndef LECTURE_06_CP2406_VECTOR_H
#define LECTURE_06_CP2406_VECTOR_H
#include <cmath>
#include "Point.h"

class Vector {
private:
    Point * startPoint;
    Point * endPoint;

public:
    Vector(double x1, double y1, double x2, double y2);  // Constructor
    ~Vector() ;     // Destructor, no implementation
    double distance() const;   // const here refers to read-only attributes
};

#endif //LECTURE_06_CP2406_VECTOR_H
