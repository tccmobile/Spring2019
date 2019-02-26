//
// Created by T10115885 on 2/26/2019.
//
#include <iostream>
using namespace std;

void hitMe(){

    static int count = 0;

    count++;

    cout<<"I've been hit "<<count<<" times"<<endl;

    return;
}

int main(){


    cout<<"Static Example!"<<endl;

    hitMe();
    hitMe();
    hitMe();

    return  0;

}
