//
// Created by 22126 on 2022/4/9.
//

#include "MyPoint.h"
#include <cmath>

double MyPoint::distance(const MyPoint &point) const {
    return sqrt(pow(point.getX() - this->getX(), 2) + pow(point.getY() - this->getY(), 2));
}
