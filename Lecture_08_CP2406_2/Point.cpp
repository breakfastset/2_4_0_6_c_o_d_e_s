#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {

}

Point Point::operator+(const Point& other) {
    return Point(x + other.x, y + other.y);
}

Point Point::operator-(const Point& other) {
    return Point(x - other.x, y - other.y);
}

bool Point::operator==(const Point& other) {
    return x == other.x && y == other.y;
}

bool Point::operator > (const Point& other) {
    if (x != other.x) { return x > other.x; }
    else { return y > other.y; }
}

bool Point::operator < (const Point& other) {  // method
    if (x != other.x) { return x < other.x; }
    else { return y < other.y; }
}


int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

// function
ostream& operator << (ostream& outputStream, const Point& point) {
    outputStream << "(" << point.getX() << ", " << point.getY() << ")";
    return outputStream;
}

istream& operator >> (istream& inputStream, Point& point) {
    int x, y;
    inputStream >> x >> y;
    point.setX(x);
    point.setY(y);
    return inputStream;
}