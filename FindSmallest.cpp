//
// Created by T10115885 on 4/30/2019.
//

#include <iostream>
using namespace std;



template <typename T>
T FindSmallest(T * a, int n){
    T smallest = a[0];

    for (int i=1; i<n; i++){
        if (a[i]<smallest){
            smallest = a[i];
        }
    }

    return smallest;

}

int main(){
    int intArray[5] = {17, 4,6, 12,10};
    double doubleArray[5] = {5.2,2.2,1.1,3.3,4.1};


    cout<<"The smallest int is: "<<FindSmallest(intArray,5)<<endl;
    cout<<"The smallest double is: "<<FindSmallest(doubleArray,5)<<endl;



}