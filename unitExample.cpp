//
// Created by T10115885 on 2/26/2019.
//

#include <iostream>
using namespace std;

double foo(double one, double two){

    double sum;
    sum = one + two;

    cout<<sum;

    return sum;
}

int main(){

    double val1,val2;

    cin>>val1;
    cin>>val2;


    foo(val1,val2);


}