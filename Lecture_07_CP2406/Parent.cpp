//
// Created by kangl on 11/3/2026.
//

#include "Parent.h"

Parent::Parent() {
    id = 1;
    cout << "Parent id " << id << " constructed" << endl;
}

Parent::~Parent() {
    cout << "Parent destroyed" << endl;
}
