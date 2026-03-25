#include <iostream>
#include <string>
#include "Pair.h"
#include "Person.h"
#include <vector>
#include "Point.h"
#include <fstream>

using namespace std;

template <typename T>
T add(T a, T b);

int main() {
    string line;
    ifstream fileIn("points_data.txt");
    if (fileIn.is_open()) {
        Point p;
        fileIn >> p;
        cout << p << endl;
        fileIn.close();
    }
    else {
        cout << "Cannot open file" << endl;
    }


    /*
    Point p(1, 2);
    Point q(3, 4);
    Point z(1, 2);

    cout << p << endl;
    Point r = p - q;
    cout << r << endl;
    cout << q << endl;

    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p == q: " << (p == q) << endl;
    cout << "p == z: " << (p == z) << endl;
    */

    /*
    vector<string> names (8, "Duck");
    names.push_back("Joe");
    names.push_back("Mary");
    for (const string& name: names) {
        cout << name << endl;
    }
    */

    /*
    Pair<string, int> nameToAge("Kim", 15);
    cout << nameToAge.getKey() << ":" << nameToAge.getValue() << endl;

    Pair<string, double> nameToHeight("Lim", 1.83);
    */

    // Person person("King Kong", 23);
    // Pair<string, Person> nameToPerson("Kong", person);
    return 0;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

