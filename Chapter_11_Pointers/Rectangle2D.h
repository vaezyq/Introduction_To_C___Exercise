//
// Created by 22126 on 2022/4/13.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_RECTANGLE2D_H
#define INTRODUCTION_TO_C___EXERCISE_RECTANGLE2D_H


class Rectangle2D {
private:
    double x;
    double y;
    double width;
    double height;

public:
    double getX() const;

    void setX(double x);

    double getY() const;

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

    void setY(double y);

    Rectangle2D();

    Rectangle2D(double x, double y, double width, double height);

    const double getArea() const;

    const double getPerimeter() const;

    bool contains(double x, double y) const;

    bool contains(const Rectangle2D &r) const;

    bool overlaps(const Rectangle2D &r) const;


};


#endif //INTRODUCTION_TO_C___EXERCISE_RECTANGLE2D_H









