//
// Created by 22126 on 2022/4/10.
//

#include "LinearEquation.h"

LinearEquation::LinearEquation(int a, int b, int c, int d, int e, int f) : a(a), b(b), c(c), d(d), e(e), f(f) {}

int LinearEquation::getA() const {
    return a;
}

int LinearEquation::getB() const {
    return b;
}

int LinearEquation::getC() const {
    return c;
}

int LinearEquation::getD() const {
    return d;
}

int LinearEquation::getE() const {
    return e;
}

int LinearEquation::getF() const {
    return f;
}

bool LinearEquation::isSolvable() const {
    if ((a * d - b * c) == 0) {
        return false;
    }
    return true;
}

double LinearEquation::getX() const {
    return static_cast<double>(e * d - b * f) / (a * d - b * c);
}

double LinearEquation::getY() const {
    return static_cast<double>(a * f - e * c) / (a * d - b * c);
}
