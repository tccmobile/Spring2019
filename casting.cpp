//
// Created by T10115885 on 1/29/2019.
//


#include <iostream>
using namespace std;

int main() {
    int kidsInFamily1;       // Should be int, not double
    int kidsInFamily2;       // (know anyone with 2.3 kids?)
    int numFamilies;

    double avgKidsPerFamily; // Expect fraction, so double

    kidsInFamily1 = 3;
    kidsInFamily2 = 4;
    numFamilies = 2;

   // avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2)
    //                   / static_cast<double>(numFamilies);

    avgKidsPerFamily = double(kidsInFamily1+kidsInFamily2)/numFamilies;


    cout << "Average kids per family: " << avgKidsPerFamily << endl;

    return 0;
}