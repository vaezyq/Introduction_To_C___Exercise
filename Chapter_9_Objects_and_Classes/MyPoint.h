//
// Created by 22126 on 2022/4/9.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_MYPOINT_H
#define INTRODUCTION_TO_C___EXERCISE_MYPOINT_H


class MyPoint {
public:
    MyPoint(double x, double y) : x(x), y(y) {}

    MyPoint() {
        x = 0;
        y = 0;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }


    double distance(const MyPoint &point) const;


private:
    double x;
    double y;


};


#endif //INTRODUCTION_TO_C___EXERCISE_MYPOINT_H
