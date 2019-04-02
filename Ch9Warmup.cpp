//
// Created by T10115885 on 4/2/2019.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {


    string userInput, first, second;
    ostringstream newFirst, newSecond;
    bool isQuit = false;

    cout << "Enter input string:" << endl;
    getline(cin, userInput);

    while (userInput != "q") {


        if (userInput.find(',') == string::npos) {
            cout << "Error: No comma in string." << endl;
            cout << "\nEnter input string:" << endl;
            getline(cin, userInput);
            if (userInput!="q")
                break;

        }

        if (userInput=="q")
            break;

        first = userInput.substr(0, userInput.find(','));
        second = userInput.substr(userInput.find(',') + 1);

        for (int i = 0; i < first.size(); ++i) {
            if (!isspace(first.at(i))) {
                newFirst << first.at(i);
            }
        }

        for (int i = 0; i < second.size(); ++i) {
            if (!isspace(second.at(i))) {
                newSecond << second.at(i);
            }
        }
        cout << "First: ";
        cout << newFirst.str() << endl;
        cout << "Second: ";
        cout << newSecond.str() << endl;

        newFirst.str("");
        newSecond.str("");

        cout << "\nEnter input string:" << endl;
        getline(cin, userInput);

    }
    return 0;
}