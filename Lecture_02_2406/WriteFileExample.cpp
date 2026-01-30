#include <iostream>
#include <fstream>
#include <string>

using namespace  std;

int main() {
    string name = "KO";
    int age = 22;
    ofstream fileOut;
    fileOut.open("my_details.txt");
    fileOut << "My name is " << name << '\n';
    fileOut << "Age is " << age << '\n';
    fileOut.close();

    cout << "File written" << endl;
    return 0;
}