#include <iostream>

using namespace std;

int main() {
    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;

    int *numbers = new int[arraySize];
    cout << "Array created!" << endl;

    delete [] numbers;   // return memory after usage
    numbers = nullptr;   // set to safety

    cout << "Enter new array size: ";
    cin >> arraySize;
    numbers = new int[arraySize];
    cout << "Array created!" << endl;

    delete [] numbers;   // return memory after usage
    numbers = nullptr;   // set to safety

    return 0;
}