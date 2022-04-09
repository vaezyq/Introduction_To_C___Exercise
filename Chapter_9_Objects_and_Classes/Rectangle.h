//
// Created by 22126 on 2022/4/9.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_RECTANGLE_H
#define INTRODUCTION_TO_C___EXERCISE_RECTANGLE_H

class Rectangle {

public:
    Rectangle(double width, double height);

    Rectangle();

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

    double getArea() const;

    double getPerimeter() const;

private:
    double width;
    double height;
};


#endif //INTRODUCTION_TO_C___EXERCISE_RECTANGLE_H
