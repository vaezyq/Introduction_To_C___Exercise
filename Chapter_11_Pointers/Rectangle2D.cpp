//
// Created by 22126 on 2022/4/13.
//

#include "Rectangle2D.h"
#include <cmath>

double Rectangle2D::getX() const {
    return x;
}

void Rectangle2D::setX(double x) {
    Rectangle2D::x = x;
}

double Rectangle2D::getY() const {
    return y;
}

void Rectangle2D::setY(double y) {
    Rectangle2D::y = y;
}

double Rectangle2D::getWidth() const {
    return width;
}

void Rectangle2D::setWidth(double width) {
    Rectangle2D::width = width;
}

double Rectangle2D::getHeight() const {
    return height;
}

void Rectangle2D::setHeight(double height) {
    Rectangle2D::height = height;
}

Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}

const double Rectangle2D::getArea() const {
    return width * height;
}

const double Rectangle2D::getPerimeter() const {
    return 2 * (width + height);
}

bool Rectangle2D::contains(double x, double y) const {
    return (std::abs(this->x - x) <= width / 2) && (std::abs(this->y - y) <= height / 2);
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
    bool test1 = contains(r.x - r.width / 2, r.y - r.height / 2);
    bool test2 = contains(r.x - r.width / 2, r.y + r.height / 2);
    bool test3 = contains(r.x + r.width / 2, r.y - r.height / 2);
    bool test4 = contains(r.x + r.width / 2, r.y + r.height / 2);

    return test1 && test2 && test3 && test4;

}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {

    if (contains(r)) {
        return false;
    }
    bool test1 = contains(r.x - r.width / 2, r.y - r.height / 2);
    bool test2 = contains(r.x - r.width / 2, r.y + r.height / 2);
    bool test3 = contains(r.x + r.width / 2, r.y - r.height / 2);
    bool test4 = contains(r.x + r.width / 2, r.y + r.height / 2);
    if (test1 || test2 || test3 || test4) {
        return true;
    }
    return false;


}












