//
// Created by T10115885 on 4/9/2019.
//

#ifndef SPRING2019_SQUARE_H
#define SPRING2019_SQUARE_H


#include "Rectangle.h"

class Square: public Rectangle {
public:
    double calcArea() override;

    void setSide(double side);

    double getSide();

    Square();

    Square(double side);
};


#endif //SPRING2019_SQUARE_H
