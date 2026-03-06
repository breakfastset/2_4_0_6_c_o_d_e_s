#ifndef LECTURE_06_CP2406_POINT_H
#define LECTURE_06_CP2406_POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    ~Point(){};
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
};

#endif //LECTURE_06_CP2406_POINT_H