#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<double> myQueue;
    int number = 0;
    while (true) {
        myQueue.push(number++);
        if (number % 100000000 == 0) {
            cout << "Inserted " << number << endl;
        }
    }
    cout << "--- will not reach here ---" << endl;
    return 0;
}