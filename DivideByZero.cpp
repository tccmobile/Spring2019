//
// Created by T10115885 on 4/23/2019.
//

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main(){
     int a,b;

     cout<<"Enter 2 numbers:"<<endl;
     cin>>a>>b;

     try{
         if (b==0){
             throw runtime_error("Exception: Division by zero");
         }

         if (a/b<0){

             //throw "Negative division";
             throw  runtime_error("Exception: Division is negative");
         }

         cout<<"a/b = "<<(double)a/b<<endl;

     }
     catch (runtime_error& error){
        cout<<error.what()<<endl;
     }



    return 0;

}