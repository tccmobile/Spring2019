//
// Created by T10115885 on 1/22/2019.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName1;
   string lastName1;
   string firstName2;
   string lastName2;

   cout << "What is the first person's first name?" << endl;
   cin >> firstName1;
   cout << "What is the first person's last name?" << endl;
   cin >> lastName1;

   cout << "What is the second person's first name?" << endl;
   cin >> firstName2;
   cout << "What is the second person's last name?" << endl;
   cin >> lastName2;

   cout << "Here are some common married-couple names:" << endl;
   cout << firstName1 << " " << lastName1 << " and " << firstName2 << " " << lastName2 << endl;
   cout << firstName1 << " and " << firstName2 << " " << lastName1 << endl;
   cout << firstName1 << " and " << firstName2 << " " << lastName2 << endl;
    cout<<firstName1<<" and "<<firstName2<<" "<<lastName1<<"-"<<lastName2<<endl;
    cout<<firstName1<<" and "<<firstName2<<" "<<lastName2<<"-"<<lastName1<<endl;

   return 0;
}