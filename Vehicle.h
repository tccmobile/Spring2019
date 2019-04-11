//
// Created by T10115885 on 4/11/2019.
//

#ifndef SPRING2019_VEHICLE_H
#define SPRING2019_VEHICLE_H

#include "Driver.h"
#include <string>
#include <ostream>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int numCylinders;
    Driver owner;

public:
    const string &getManufacturer() const;

    void setManufacturer(const string &manufacturer);

    int getNumCylinders() const;

    void setNumCylinders(int numCylinders);

    const Driver &getOwner() const;

    void setOwner(const Driver &owner);

    friend ostream &operator<<(ostream &os, const Vehicle &vehicle);

    Vehicle(const string &manufacturer, int numCylinders, const Driver &owner);

};


#endif //SPRING2019_VEHICLE_H
