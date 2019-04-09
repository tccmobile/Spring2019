//
// Created by T10115885 on 4/9/2019.
//

#ifndef SPRING2019_STUDENT_H
#define SPRING2019_STUDENT_H


#include "Person.h"

class Student: public Person {

private:
    double gpa;
public:
    double getGpa() const;

    void setGpa(double gpa);

    Student();

    Student(const string &name, int age, double gpa);

    virtual void printMe();

};


#endif //SPRING2019_STUDENT_H
