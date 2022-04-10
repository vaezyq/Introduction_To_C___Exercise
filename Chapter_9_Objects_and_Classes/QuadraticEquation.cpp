//
// Created by 22126 on 2022/4/10.
//

#include "QuadraticEquation.h"
#include <cmath>
#include <iostream>

QuadraticEquation::QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

double QuadraticEquation::getA() const {
    return a;
}

double QuadraticEquation::getB() const {
    return b;
}

double QuadraticEquation::getC() const {
    return c;
}

double QuadraticEquation::getDiscriminant() const {
    return pow(b, 2) - 4 * a * c;
}

double QuadraticEquation::getRoot1() const {
    double discriminant = this->getDiscriminant();
    if (discriminant < 0) {
        return 0;
    }

    return (-1 * b + discriminant) / 2 * a;
}

double QuadraticEquation::getRoot2() const {
    double discriminant = this->getDiscriminant();
    if (discriminant < 0) {
        return 0;
    }

    return (-1 * b - discriminant) / 2 * a;
}

void QuadraticEquation::displayResults() {
    double discriminant = this->getDiscriminant();
    if (discriminant < 0) {
        std::cout << "The equation has no real roots" << std::endl;
    } else if (discriminant == 0) {
        std::cout << "the two root of the equation is same: " << getRoot1() << std::endl;
    } else {
        std::cout << "the two root of the equation is: " << getRoot1() << " " << getRoot2() << std::endl;
    }


}
