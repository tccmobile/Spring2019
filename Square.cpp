//
// Created by T10115885 on 4/9/2019.
//

#include "Square.h"

double Square::calcArea() {
    return getWidth() * getWidth();
}
void Square::setSide(double side) {
    setLength(side);
    setWidth(side);
}

double Square::getSide() {
    return getWidth();
}

Square::Square() {}

Square::Square(double side) : Rectangle(side, side) {}
