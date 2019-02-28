//
// Created by T10115885 on 2/28/2019.
//

#include <iostream>
#include <string>
using namespace std;

char PrintMenu(string usrStr);
int GetNumOfNonWSCharacters(const string usrStr);
int  GetNumOfWords(const string usrStr);
int FindText(const string ToBeFound, const string usrStr);
string ReplaceExclamation(const string usrStr);
string ShortenSpace(const string usrStr);


int main() {

   /* Type your code here. */
   string userInput;
   char choice;

   cout<<"Enter a sample text:"<<endl;
   getline(cin,userInput);
   cout<<"\nYou entered: "<<userInput<<endl;

   do{
       choice = PrintMenu(userInput);
   } while (choice!= 'q');

   return 0;
}