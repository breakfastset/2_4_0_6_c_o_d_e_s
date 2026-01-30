#include <iostream>

using namespace  std;

int main() {
    int a = 11;
    int b = 22;

    int *ptrX = &a;
    int *ptrY = &b;

    // *ptrX = *ptrY;   // *ptrX = 22
    ptrX = ptrY;      // ptrX = &b

    cout << "a: " << a << ", b: " << b << ", *ptrX = " << *ptrX <<
        ", *ptrY = " << *ptrY << endl;

    return 0;
}