#include <iostream>

using namespace std;

// #define ARRAY_SIZE 10   // predirective
const int ARRAY_SIZE = 10;  // global constant

int main() {
    int numbers[ARRAY_SIZE] = {10, 9, 8, 5, 14, 13, 7, 8, 4, 20};  // an array of 10 integers
    int target;
    cout << "Enter target: ";
    cin >> target;   // read in value from the keyboard

    cout << "Address of numbers: " << &numbers << endl;a
    for (int i = 0; i < ARRAY_SIZE; i++) {
        // cout << "numbers[" << i << "] = " << numbers[i] << " at "
        //     << "address " << &numbers[i] << endl;
        if (numbers[i] == target) {
            cout << "found at index " << i << endl;
        }
    }
    return 0;
}