//
// Created by T10115885 on 4/4/2019.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ios>
#include <iomanip>
using namespace std;

int main() {

    /* Type code here. */

    string tableTitle,column1,column2, userInput,firstWord,secondWord;
    vector<string> authors;
    vector<int> books;
    istringstream inSS;
    int numBooks=0;
    bool hasError = false;

    cout<<"Enter a title for the data:"<<endl;
    getline(cin,tableTitle);
    cout<<"You entered: "<<tableTitle<<endl;

    cout<<"\nEnter the column 1 header:"<<endl;
    getline(cin,column1);
    cout<<"You entered: "<<column1<<endl;

    cout<<"\nEnter the column 2 header:"<<endl;
    getline(cin,column2);
    cout<<"You entered: "<<column2<<endl;

    cout<<"\nEnter a data point (-1 to stop input):"<<endl;
    getline(cin,userInput);

    while (userInput!="-1"){

        if (userInput.find(',') == string::npos) {
            hasError = true;
            cout<<"Error: No comma in string."<<endl;
        }

        if (!hasError){
            firstWord = userInput.substr(0, userInput.find(','));
            secondWord = userInput.substr(userInput.find(',') + 1);
            if (secondWord.find(',')!=string::npos){
                hasError = true;
                cout<<"Error: Too many commas in input."<<endl;
            }
        }

        if (!hasError){
            inSS.clear();
            inSS.str(secondWord);
            inSS>>numBooks;

            if (inSS.fail()){
                hasError = true;
                cout<<"Error: Comma not followed by an integer."<<endl;
            }

        }

        if (!hasError){
            cout<<"Data string: "<<firstWord<<endl;
            cout<<"Data integer: "<<numBooks<<endl;
            authors.push_back(firstWord);
            books.push_back(numBooks);
        }


        cout<<"\nEnter a data point (-1 to stop input):"<<endl;
        getline(cin,userInput);
        hasError = false;

    }

    // 2 vectors of valid data have been created
    // draw table and histogram


    return 0;
}