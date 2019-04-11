//
// Created by T10115885 on 4/9/2019.
//

#include "Rectangle.h"

double Rectangle::calcArea() {
    return length * width;
}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
}

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}
