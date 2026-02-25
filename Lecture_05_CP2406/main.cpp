#include <iostream>

using namespace  std;

int * getPtrToFive();

int main() {
    int *ptr = getPtrToFive();
    cout << "contents of ptr: " << ptr << endl;
    cout << "contents of *ptr: " << *ptr << endl;
    return 0;
}

int * getPtrToFive() {
    int *x = new int;
    *x = 5;
    return x;
}