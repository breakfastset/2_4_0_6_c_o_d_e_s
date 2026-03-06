#include "Vector.h"

Vector::Vector(double x1, double y1, double x2, double y2) {
    startPoint = new Point(x1, y1);
    endPoint = new Point(x2, y2);
}

Vector::~Vector() {
    delete startPoint;
    delete endPoint;
}

double Vector::distance() const {
    double x1 = startPoint->getX();
    double y1 = startPoint->getY();

    double x2 = endPoint->getX();
    double y2 = endPoint->getY();

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distance;
}
// leng.kang@jcu.edu.au