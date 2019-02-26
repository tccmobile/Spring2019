//
// Created by T10115885 on 2/26/2019.
//

#include <iostream>
using namespace std;

int StepsToFeet(int baseSteps) {
   const int FEET_PER_STEP = 3;  // Unit conversion
   string name;
   int myTot = 40;                  // Corresponding feet to steps


   myTot = baseSteps * FEET_PER_STEP;

   //return myTot;
}

int main() {
   int stepsInput=0 ;            // User defined steps
   int feetTot = 0;               // Corresponding feet to steps

   // Prompt user for input
   cout << "Enter number of steps walked: ";
   cin >> stepsInput;

   // Call functions to convert steps to feet and calories
   feetTot = StepsToFeet(stepsInput);
   cout << "Feet: " << feetTot << endl;

   return 0;
}