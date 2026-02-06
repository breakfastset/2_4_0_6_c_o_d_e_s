#include <iostream>

using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
int fib1(int n);
int fib2(int n);

int main() {

    cout << "Using recursive fib() " << endl;
    for (int i = 0; i < 44; i++) {
        cout << fib1(i) << "  ";
    }
    cout << endl;

    cout << "Using iterative fib() " << endl;
    for (int i = 0; i < 44; i++) {
        cout << fib2(i) << ",  ";
    }
    cout << endl;
    return 0;
}

int fib1(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int n1 = 0;
    int n2 = 1;
    int n3;
    for (int i = 2; i <= n; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}