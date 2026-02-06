#include <iostream>
#include <string>

using namespace std;

void changeThis(int value);  // pass by value
void changeThat(int &value);   // pass by reference
void changeIt(int *intPtr);   // pass by pointer

void changeThis(int value, int value2);  // overloaded method
void changeThis(string value);

// changeThis(int)
// changeThis(int, int)
// changeThis(string)

int main() {

    int x = 10;
    changeThis(x);
    cout << "After changeThis(x) pass by value, x=" << x << endl;
    changeThat(x);
    cout << "After changeThat(x) pass by reference, x=" << x << endl;
    changeIt(&x);
    cout << "After changeIt(x) pass by pointer, x=" << x << endl;
    return 0;
}

void changeIt(int *intPtr) {
    *intPtr = 7777;
}

void changeThat(int &value) {
    value = 1000;
}

void changeThis(int value) {
    value = 999;
}