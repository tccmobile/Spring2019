//
// Created by T10115885 on 4/11/2019.
//

#ifndef SPRING2019_DRIVER_H
#define SPRING2019_DRIVER_H

#include <string>
#include <ostream>

using namespace std;

class Driver {

private:
    string name;
public:
    const string &getName() const;

    void setName(const string &name);

    Driver();

    Driver(const string &name);

    friend ostream &operator<<(ostream &os, const Driver &driver);


};


#endif //SPRING2019_DRIVER_H
