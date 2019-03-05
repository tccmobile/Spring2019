//
// Created by T10115885 on 3/5/2019.
//

#ifndef SPRING2019_PERSON_H
#define SPRING2019_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    Person();

    Person(const string &name, int age);

};


#endif //SPRING2019_PERSON_H
