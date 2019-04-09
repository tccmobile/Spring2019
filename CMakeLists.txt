cmake_minimum_required(VERSION 3.12)
project(Spring2019)

set(CMAKE_CXX_STANDARD 14)

add_executable(Spring2019 Shape.cpp Shape.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h Square.cpp Square.h TestShapes.cpp)