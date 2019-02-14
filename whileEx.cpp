//
// Created by T10115885 on 2/14/2019.
//

#include <iostream>
using namespace std;

int main() {
    int userNum;

    cin >> userNum;

    /* Your solution goes here  */

    while (userNum>2){
        userNum/=4;
        cout<<userNum<<" ";
    }

    cout << endl;

    return 0;
}