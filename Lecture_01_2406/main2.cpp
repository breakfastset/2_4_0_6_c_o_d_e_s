#include <iostream>
#include <cstring>
using namespace std;

struct Car {
    char name[10];
    float price;
};

// it is better to include the forward declaration
// above the main() function and implement the function
// below main()
void conversionExample();
Car getCar();   // DECLARATION
void displayCar(Car &myCar);

int main() {
    cout << "Welcome to CP2406, 2026" << endl;
    conversionExample();
    Car myCar = getCar();
    displayCar(myCar);
    return 0;
}
void displayCar(Car &myCar) {
    cout << "  Car: " << myCar.name << endl;
    cout << "Price: $" << myCar.price << endl;
}

Car getCar() {   // IMPLEMENTATION
    Car myCar;
    strcpy(myCar.name, "BYD");
    myCar.price = 205000;
    return myCar;
}

/**
 * @brief Convert float to int and determine whether
 *        the number is positive, negative or zero
 * @return void
 */
void conversionExample() {
    float inputNumber;
    cout << "Enter a floating point number: ";
    cin >> inputNumber;

    int number = inputNumber;
    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero.";
    }
}