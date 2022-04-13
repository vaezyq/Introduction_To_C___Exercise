//
// Created by 22126 on 2022/4/13.
//

#include "Circle2D.h"

const double PI = 3.141592653589793;

double Circle2D::getX() const {
    return x;
}

double Circle2D::getY() const {
    return y;
}

double Circle2D::getRadius() const {
    return radius;
}

Circle2D::Circle2D() {
    x = 0;
    y = 0;
    radius = 1;
}

Circle2D::Circle2D(double x, double y, double radius) : x(x), y(y), radius(radius) {}

double Circle2D::getArea() const {
    return PI * radius * radius;
}

double Circle2D::getPerimeter() const {
    return 2 * PI * radius;
}
