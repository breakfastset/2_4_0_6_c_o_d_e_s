#include <iostream>
#include <fstream>
#include <string>

using namespace  std;

int main() {
    string name;
    int savings1, savings2, savings3;

    ifstream fileIn;
    fileIn.open("savings.txt");
    fileIn >> name >> savings1 >> savings2 >> savings3;
    fileIn.close();

    cout << name << " has saved " << (savings1 + savings2 + savings3) << '\n';

    return 0;
}