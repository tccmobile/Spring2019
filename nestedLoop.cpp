//
// Created by T10115885 on 2/14/2019.
//

#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   /* Your solution goes here  */
   for (i=0;i<=userNum;i++){

      for (int j = 0; j <i ; ++j) {
         cout<<" ";
      }
      cout<<i<<endl;
   }


   return 0;
}