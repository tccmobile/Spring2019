//
// Created by T10115885 on 2/5/2019.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    bool hasDigit;
    string passCode;

    hasDigit = false;
    cin >> passCode;

    /* Your solution goes here  */

    hasDigit = ((isdigit(passCode.at(0))) || (isdigit(passCode.at(1))) || (isdigit(passCode.at(2))));

    if (hasDigit) {
        cout << "Has a digit." << endl;
    }
    else {
        cout << "Has no digit." << endl;
    }

    return 0;
}