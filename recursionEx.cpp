//
// Created by T10115885 on 4/16/2019.
//

#include <iostream>
using namespace std;

void BackwardsAlphabet(char currLetter){
    if (currLetter == 'a') {
        cout << currLetter << endl;
    }
    else{
        cout << currLetter << " ";
        BackwardsAlphabet(currLetter - 1);
        cout << currLetter << " ";
    }
}

int main() {
    char startingLetter;

    startingLetter = 'z';

    /* Your solution goes here  */
    BackwardsAlphabet(startingLetter);

    return 0;
}