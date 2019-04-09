//
// Created by T10115885 on 4/9/2019.
//
#include "Person.h"
#include "Student.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

    /*Person one;
    Person two("Bob",42);

    Student three;
    Student four("Carl",17,4.0);

    //cout<<one.getName()<<" is "<<one.getAge()<<" years old."<<endl;
    //cout<<two.getName()<<" is "<<two.getAge()<<" years old."<<endl;

    one.printMe();
    two.printMe();

    three.setName("Sue");
    three.setAge(65);
    three.setGpa(3.5);
   // cout<<three.getName()<<" is "<<three.getAge()<<" years old. "<<" And has a gpa of: "<<three.getGpa()<<endl;
   // cout<<four.getName()<<" is "<<four.getAge()<<" years old. "<<" And has a gpa of: "<<four.getGpa()<<endl;

    three.printMe();
    four.printMe();
*/

    vector<Person *> tulsa;

    Person *one = new Person();
    Person *two = new Person("Bill",52);

    tulsa.push_back(one);
    tulsa.push_back(two);

   // one -> printMe();
    //two -> printMe();

    Student *three = new Student();
    Student *four = new Student("Alex",16,3.75);
    tulsa.push_back(three);
    tulsa.push_back(four);

    //three ->printMe();
   // four->printMe();

    Person *five = new Student("Emily",25,4.0);

    tulsa.push_back(five);

    for (int i = 0; i < tulsa.size() ; ++i) {
        tulsa.at(i)->printMe();

    }
   // five->printMe();



    return 0;
}