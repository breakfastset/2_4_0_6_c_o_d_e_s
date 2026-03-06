#include <iostream>
#include "Vector.h"

int main() {
    std::cout << "Using Classes" << std::endl;

    Vector vec1(10, 10, 20, 20);
    Vector vec2(3, 4, 10, 11);

    std::cout << "Distance for vec1: " << vec1.distance() << std::endl;
    std::cout << "Distance for vec2: " << vec2.distance() << std::endl;

    return 0;
}