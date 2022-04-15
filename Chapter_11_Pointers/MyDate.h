//
// Created by 22126 on 2022/4/14.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_MYDATE_H
#define INTRODUCTION_TO_C___EXERCISE_MYDATE_H


class MyDate {
private:

    int year;
    int month;
    int day;

public:
    MyDate();

    MyDate(int year, int month, int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    void setData(long seconds);

    bool isLeapYear(int);

    int getNumOfDaysInMonths(int year, int month);


};


#endif //INTRODUCTION_TO_C___EXERCISE_MYDATE_H
