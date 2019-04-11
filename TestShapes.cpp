//
// Created by T10115885 on 4/9/2019.
//

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<Shape *> myShapes;

  //  myShapes.push_back(new Shape());
    myShapes.push_back(new Circle());
    myShapes.push_back(new Circle(5));
    myShapes.push_back(new Rectangle());
    myShapes.push_back(new Rectangle(3,4));
    myShapes.push_back(new Square());
    myShapes.push_back(new Square(6));

    for (int i = 0; i < myShapes.size(); ++i) {
        cout<<myShapes.at(i)->calcArea()<<endl;
    }





    return 0;
}