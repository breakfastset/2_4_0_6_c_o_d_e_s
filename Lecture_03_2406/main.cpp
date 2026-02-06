#include <iostream>

int factorial(int n);   // function prototypes, forward declarations
int factorial2(int n);

int main() {
    std::cout << factorial(5) << std::endl;
    std::cout << factorial(0) << std::endl;
    std::cout << factorial(-10) << std::endl;
    std::cout << factorial(1) << std::endl;
    return 0;
}

int factorial2(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial2(n - 1);
    }
}

int factorial(int n) {
    int result = -1;
    if (n == 0) result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorial3(int n) {
    int result = 1;
    if (n < 0) {
        result = -1;
    }
    else if (n > 0) {
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
    }
    return result;
}