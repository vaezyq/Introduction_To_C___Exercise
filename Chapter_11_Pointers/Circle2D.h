//
// Created by 22126 on 2022/4/13.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_CIRCLE2D_H
#define INTRODUCTION_TO_C___EXERCISE_CIRCLE2D_H


class Circle2D {

private:
    double x;
    double y;
    double radius;

public:
    Circle2D();

    Circle2D(double x, double y, double radius);

    double getX() const;

    double getY() const;

    double getRadius() const;

    double getArea() const;

    double getPerimeter() const;

    bool contains(double x, double y);

    bool contains(const Circle2D &circle);

    bool overlaps(const Circle2D &circle);


};


#endif //INTRODUCTION_TO_C___EXERCISE_CIRCLE2D_H
