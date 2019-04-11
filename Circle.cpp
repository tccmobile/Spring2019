//
// Created by T10115885 on 4/9/2019.
//

#include "Circle.h"

double Circle::calcArea() {
    return 3.14159 * radius * radius;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double radius) : radius(radius) {}
