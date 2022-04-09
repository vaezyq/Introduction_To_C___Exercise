//
// Created by 22126 on 2022/4/9.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_FAN_H
#define INTRODUCTION_TO_C___EXERCISE_FAN_H


class Fan {
private:
    int speed;
    bool on;
    double radius;
public:
    int getSpeed() const;

    void setSpeed(int speed);

    bool isOn() const;

    void setOn(bool on);

    double getRadius() const;

    void setRadius(double radius);

    Fan();
};


#endif //INTRODUCTION_TO_C___EXERCISE_FAN_H
