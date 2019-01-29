//
// Created by T10115885 on 1/29/2019.
//


#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;

/* A game inspired by "Mad Libs" where user enters nouns,
 * verbs, etc., and then a story using those words is output.
 */

int main() {
   string wordRelative;
   string wordFood;
   string wordAdjective;
   string wordTimePeriod;

   // Get user's words
   cout << "Type input without spaces." << endl;

   cout << "Enter a kind of relative: " << endl;
  // cin  >> wordRelative;
  getline(cin,wordRelative);

   cout << "Enter a kind of food: " << endl;
   //cin  >> wordFood;
   getline(cin,wordFood);
   cout << "Enter an adjective: "   << endl;
   //cin  >> wordAdjective;
   getline(cin,wordAdjective);

   cout << "Enter a time period: "  << endl;
   //cin  >> wordTimePeriod;
   getline(cin,wordTimePeriod);

   // Tell the story
   cout << endl;
   cout << "My " << wordRelative << " says eating " << wordFood << endl;
   cout << "will make me more " << wordAdjective << "," << endl;
   cout << "so now I eat it every " << wordTimePeriod << "." << endl;

   return 0;
}