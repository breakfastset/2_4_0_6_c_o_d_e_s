#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b);   // sum(int, int)
int sum(const string& text);
// float sum(int x, int y);  // sum(int, int), clash

int main() {
    cout << "sum(1, 2): " << sum(1, 2) << endl;
    cout << "sum('AB'): " << sum("AB") << endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sum(const string& text) {
    int total = 0;
    for (int i = 0; i < text.length(); i++) {
        total += int(text[i]);
    }
    return total;
}