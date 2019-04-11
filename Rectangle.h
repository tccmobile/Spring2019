//
// Created by T10115885 on 4/9/2019.
//

#ifndef SPRING2019_RECTANGLE_H
#define SPRING2019_RECTANGLE_H


#include "Shape.h"

class Rectangle: public Shape {
private:
    double length, width;
public:
    double calcArea() override;

    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setWidth(double width);

    Rectangle();

    Rectangle(double length, double width);

};


#endif //SPRING2019_RECTANGLE_H
