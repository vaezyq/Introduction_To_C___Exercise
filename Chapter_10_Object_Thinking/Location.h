//
// Created by 22126 on 2022/4/11.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_LOCATION_H
#define INTRODUCTION_TO_C___EXERCISE_LOCATION_H



class Location {
private:
    int row;
    int column;
    double maxValue;
public:
    void setRow(int row);

    void setColumn(int column);

    void setMaxValue(double maxValue);

    int getRow() const;

    int getColumn() const;

    double getMaxValue() const;

    virtual ~Location();

    Location(int row, int column, double maxValue);


};


#endif //INTRODUCTION_TO_C___EXERCISE_LOCATION_H
