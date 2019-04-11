//
// Created by T10115885 on 4/11/2019.
//

#include "Vehicle.h"

const string &Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const string &manufacturer) {
    Vehicle::manufacturer = manufacturer;
}

int Vehicle::getNumCylinders() const {
    return numCylinders;
}

void Vehicle::setNumCylinders(int numCylinders) {
    Vehicle::numCylinders = numCylinders;
}

const Driver &Vehicle::getOwner() const {
    return owner;
}

void Vehicle::setOwner(const Driver &owner) {
    Vehicle::owner = owner;
}

ostream &operator<<(ostream &os, const Vehicle &vehicle) {
    os << "manufacturer: " << vehicle.manufacturer << " numCylinders: " << vehicle.numCylinders << " owner: "
       << vehicle.getOwner().getName();
    return os;
}

Vehicle::Vehicle(const string &manufacturer, int numCylinders, const Driver &owner) : manufacturer(manufacturer),
                                                                                      numCylinders(numCylinders),
                                                                                      owner(owner) {}
