//
// Created by T10115885 on 3/26/2019.
//

#include <iostream>
using namespace std;

int main() {
    int* numItemsPtr = nullptr;
    int numItems;

    numItems = 99;

    /* Your solution goes here  */
    numItemsPtr = &numItems;
    cout<<"Items: "<<*(numItemsPtr+1)<<endl;

    return 0;
}