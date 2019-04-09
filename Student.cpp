//
// Created by T10115885 on 4/9/2019.
//

#include "Student.h"
#include <iostream>
using namespace std;


double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double gpa) {
    Student::gpa = gpa;
}

Student::Student() {
    gpa=3.0;
}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {}

void Student::printMe() {
   // cout<<getName()<<" is "<<getAge()<<" years old. "<<" And has a gpa of: "<<getGpa()<<endl;
    cout<<getName()<<" is "<<getAge()<<" years old. "<<" And has a gpa of: "<<getGpa()<<endl;

}
