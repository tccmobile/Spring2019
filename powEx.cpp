//
// Created by T10115885 on 4/16/2019.
//

#include <iostream>
using namespace std;

int RaiseToPower(int baseVal, int exponentVal){
    int resultVal;

    if (exponentVal == 0) {
        resultVal = 1;
    }
    else {
        resultVal = baseVal * RaiseToPower(baseVal,exponentVal-1);
    }

    return resultVal;
}

int main() {
    int userBase;
    int userExponent;

    userBase = 4;
    userExponent = 2;
    cout << userBase << "^" << userExponent << " = "
         << RaiseToPower(userBase, userExponent) << endl;

    return 0;
}