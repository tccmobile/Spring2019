//
// Created by T10115885 on 4/11/2019.
//

#include "Driver.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Driver one("Will");
    Driver two("Kim");

    Vehicle car("Toyota",4,one);



    cout<<car<<endl;

    car.setManufacturer("Nissan");
    car.setOwner(two);

    cout<<car<<endl;



    return 0;
}