#ifndef LECTURE_08_CP2406_2_POINT_H
#define LECTURE_08_CP2406_2_POINT_H
#include <iostream>

using namespace std;
class Point {
private:
      int x;
      int y;

public:
      Point() { x = 0; y = 0; };
      Point(int x, int y);
      Point operator+(const Point& other);
      Point operator-(const Point& other);
      bool operator==(const Point& other);
      bool operator>(const Point& other);
      bool operator<(const Point& other);
      int getX() const;
      int getY() const;
      void setX(int x);
      void setY(int y);

};

ostream& operator << (ostream& outputStream, const Point& point);
istream& operator >> (istream& inputStream, Point& point);

#endif //LECTURE_08_CP2406_2_POINT_H