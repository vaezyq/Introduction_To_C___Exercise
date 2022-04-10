//
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_QUADRATICEQUATION_H
#define INTRODUCTION_TO_C___EXERCISE_QUADRATICEQUATION_H


class QuadraticEquation {
private:
    double a;
    double b;
    double c;
public:
    double getA() const;

    double getB() const;

    double getC() const;

    QuadraticEquation(double a, double b, double c);

    double getDiscriminant() const;

    double getRoot1() const;

    double getRoot2() const;

    void displayResults();

};


#endif //INTRODUCTION_TO_C___EXERCISE_QUADRATICEQUATION_H
