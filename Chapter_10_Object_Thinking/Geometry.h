//
// Created by 22126 on 2022/4/12.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_GEOMETRY_H
#define INTRODUCTION_TO_C___EXERCISE_GEOMETRY_H


class Geometry {
private:
    int n;
    double side;
    double x;
    double y;

public:
    Geometry();

    Geometry(int n, double side);

    Geometry(int n, double side, double x, double y);

    int getN() const;

    void setN(int n);

    double getSide() const;

    void setSide(double side);

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getPerimeter() const;

    double getArea() const;

};


#endif //INTRODUCTION_TO_C___EXERCISE_GEOMETRY_H
