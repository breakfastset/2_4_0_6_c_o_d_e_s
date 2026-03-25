#include "Child.h"

Child::Child() {
    age = 5;
    cout << "Child id: " << id << ", aged " << age << " constructed." << endl;
}


Child::~Child() {
    cout << "Child destroyed" << endl;
}
