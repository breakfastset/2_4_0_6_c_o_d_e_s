#include <cstring>
#include <iostream>

using namespace std;

const int STRING_LENGTH = 5;

int main() {
    // C-string
    char str[STRING_LENGTH + 1] = "hello";  // {'h', 'e', 'l', 'l', 'o', '\0'}
    str[1] = 'A';
    cout << "Number of chars: " << strlen(str) << endl;
    cout << str << endl;
    str[2] = '\0';   // {'h', 'A', '\0', 'l', 'o', '\0'}
    cout << "Now str is: " << str << endl;

    return 0;
}