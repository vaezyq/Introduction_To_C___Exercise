//
// Created by 22126 on 2022/4/12.
//

#include "Geometry.h"
#include <cmath>

const double PI = 3.141592653589793;

Geometry::Geometry() {
    n = 3;
    side = 1;
    x = 0;
    y = 0;
}

Geometry::Geometry(int n, double side) : n(n), side(side), x(0), y(0) {}

Geometry::Geometry(int n, double side, double x, double y) : n(n), side(side), x(x), y(y) {}

int Geometry::getN() const {
    return n;
}

void Geometry::setN(int n) {
    Geometry::n = n;
}

double Geometry::getSide() const {
    return side;
}

void Geometry::setSide(double side) {
    Geometry::side = side;
}

double Geometry::getX() const {
    return x;
}

void Geometry::setX(double x) {
    Geometry::x = x;
}

double Geometry::getY() const {
    return y;
}

void Geometry::setY(double y) {
    Geometry::y = y;
}

double Geometry::getPerimeter() const {
    return n * side;
}

double Geometry::getArea() const {
    return (n * pow(side, 2)) / (4 * tan(PI / n));
}
