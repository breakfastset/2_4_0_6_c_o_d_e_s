#include <iostream>
#include <string>
using namespace  std;

int main() {
    bool validNumber = false;
    string line;
    int number;

    while (!validNumber) {
        cout << "Enter an integer: ";
        getline(cin, line);
        try {
            number = stoi(line);
            validNumber = true;
        } catch (...) {
            cerr << "Integers only!" << endl;
        }
    }

    cout << "Number you keyed in: " << number << endl;

    return 0;
}