//
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_DATA_H
#define INTRODUCTION_TO_C___EXERCISE_DATA_H


class Data {

private:
    int year;
    int month;
    int day;
public:
    Data();

    Data(long seconds);

    Data(int year, int month, int day);

    int getYear() const;

    int getMonth() const;

    int getDay() const;

    void setData(long seconds);

    bool isLeapYear(int year);

    int getNumOfDaysInMonths(int year, int month);


};


#endif //INTRODUCTION_TO_C___EXERCISE_DATA_H
