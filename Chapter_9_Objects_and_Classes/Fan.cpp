//
// Created by 22126 on 2022/4/9.
//

#include "Fan.h"


Fan::Fan() {
    speed = 1;
    on = false;
    radius = 5;
}

int Fan::getSpeed() const {
    return speed;
}

void Fan::setSpeed(int speed) {
    Fan::speed = speed;
}

bool Fan::isOn() const {
    return on;
}

void Fan::setOn(bool on) {
    Fan::on = on;
}

double Fan::getRadius() const {
    return radius;
}

void Fan::setRadius(double radius) {
    Fan::radius = radius;
}
