//
// Created by T10115885 on 2/28/2019.
//

#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {

   /* Type your code here. */
    return usrStr.size();

}

void OutputWithoutWhitespace(const string usrStr){

    cout<<"String with no whitespace: ";
    for (int i = 0; i < usrStr.size() ; ++i) {
        if ((usrStr.at(i)!=' ') && (usrStr.at(i)!='\t')){
            cout<<usrStr.at(i);
        }
    }
    cout<<endl;
}

int main() {

   /* Type your code here. */
   string userInput;

   cout<<"Enter a sentence or phrase:"<<endl;
   getline(cin,userInput);
   cout<<"\nYou entered: "<<userInput<<endl;
   cout<<"\nNumber of characters: "<<GetNumOfCharacters(userInput)<<endl;
    OutputWithoutWhitespace(userInput);

    return 0;
}