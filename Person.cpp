//
// Created by T10115885 on 3/5/2019.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person() { name="None"; age=0;}

Person::Person(const string &name, int age) : name(name), age(age) {}
