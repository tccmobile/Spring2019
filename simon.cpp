//
// Created by T10115885 on 2/14/2019.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string simonPattern;
    string userPattern;
    int userScore;
    int i;

    userScore = 0;
    simonPattern = "RRGBRYYBGY";
    userPattern  = "RRGBBRYBGY";

    /* Your solution goes here  */


    for (int i = 0; i < simonPattern.size() ; ++i) {
        if (simonPattern.at(i)==userPattern.at(i)){
            userScore++;
        } else {
            break;
        }
    }

    cout << "userScore: " << userScore << endl;

    return 0;
}