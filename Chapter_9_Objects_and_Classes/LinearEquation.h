//
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_LINEAREQUATION_H
#define INTRODUCTION_TO_C___EXERCISE_LINEAREQUATION_H


class LinearEquation {

private:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;


public:
    LinearEquation(int a, int b, int c, int d, int e, int f);

    int getA() const;

    int getB() const;

    int getC() const;

    int getD() const;

    int getE() const;

    int getF() const;

    bool isSolvable() const;

    double getX() const;

    double getY() const;


};


#endif //INTRODUCTION_TO_C___EXERCISE_LINEAREQUATION_H
