//
// Created by 22126 on 2022/4/13.
//

#include "Circle2D.h"
#include <cmath>

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

bool Circle2D::contains(double x, double y) {
    return (pow((x - this->x), 2) + pow((y - this->y), 2)) <= pow(radius, 2);
}

bool Circle2D::contains(const Circle2D &circle) {
    return (pow((circle.x - this->x), 2) + pow((circle.y - this->y), 2)) <= pow(circle.radius - radius, 2);
}

bool Circle2D::overlaps(const Circle2D &circle) {
    double distance = pow((circle.x - this->x), 2) + pow((circle.y - this->y), 2);

    return distance <= pow((circle.x + this->x), 2) && distance >= pow((circle.x + this->x), 2);
}
