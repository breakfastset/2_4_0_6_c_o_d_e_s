#include <iostream>
using namespace  std;

int main() {
    int x = 10;
    int y = 20;
    int *z = nullptr;    // pointer (address datatype)
    cout << "x: " << x << " at address " << &x << endl;
    cout << "y: " << y << " at address " << &y << endl;
    cout << "z: " << z << " at address " << &z << endl;
    cout << endl;
    z = &x;   // z now points to x
    *z = 999;  // change the contents of what z is pointing to, to 999
    cout << "After *z = 999" << endl;
    cout << "x: " << x << " at address " << &x << endl;
    cout << "z: " << z << " at address " << &z << endl;

    return 0;
}