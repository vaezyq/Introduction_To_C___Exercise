// create by 22126 
// 2022/4/9 17:48
#include <iostream>
#include "Rectangle.h"

using namespace std;


double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    Rectangle::height = height;
}

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}
