//
// Created by T10115885 on 4/11/2019.
//

#include "Driver.h"

const string &Driver::getName() const {
    return name;
}

void Driver::setName(const string &name) {
    Driver::name = name;
}

Driver::Driver() {
    name="none";
}

Driver::Driver(const string &name) : name(name) {}

ostream &operator<<(ostream &os, const Driver &driver) {
    os << "My name is: " << driver.name;
    return os;
}


