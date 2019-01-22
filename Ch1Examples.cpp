//
// Created by T10115885 on 1/22/2019.
//


#include <iostream>
using namespace std;

int main() {
    int hourlyWage;

    hourlyWage = 20;

    cout << "Annual salary is: ";
    cout << hourlyWage * 40 * 50;
    cout << endl;

    cout << "Monthly salary is: ";
    cout << ((hourlyWage * 40 * 50) / 12);
    cout << endl;
    // FIXME: The above is wrong. Change the 1 so the statement outputs monthly salary.

    return 0;
}