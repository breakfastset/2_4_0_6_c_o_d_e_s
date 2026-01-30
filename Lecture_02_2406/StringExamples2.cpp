#include <string>
#include <iostream>

using namespace std;

int main() {
    string str1 = "Hello World!";
    cout << str1 << endl;
    cout << "Number of chars: " << str1.length() << endl;
    str1 = "Bye bye";
    str1[1] = 'X';
    cout << str1 << endl;
    cout << "Number of chars: " << str1.length() << endl;

    return 0;
}