//
// Created by T10115885 on 4/16/2019.
//

#include <iostream>
using namespace std;

// Returns number of pennies if pennies are doubled numDays times
long long DoublePennies(long long numPennies, int numDays){
    long long totalPennies;

    /* Your solution goes here  */
    if (numDays ==0){
        totalPennies = numPennies;
    }
    else {
        totalPennies = DoublePennies((numPennies * 2), numDays - 1);
    }

    return totalPennies;
}

// Program computes pennies if you have 1 penny today,
// 2 pennies after one day, 4 after two days, and so on
int main() {
    long long startingPennies;
    int userDays;

    startingPennies = 1;
    userDays = 10;
    cout << "Number of pennies after " << userDays << " days: "
         << DoublePennies(startingPennies, userDays) << endl;
    return 0;
}