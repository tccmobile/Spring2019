//
// Created by T10115885 on 4/9/2019.
//

#ifndef SPRING2019_CIRCLE_H
#define SPRING2019_CIRCLE_H


#include "Shape.h"

class Circle: public Shape {
private:
    double radius;
public:
    double calcArea() override;

};


#endif //SPRING2019_CIRCLE_H
