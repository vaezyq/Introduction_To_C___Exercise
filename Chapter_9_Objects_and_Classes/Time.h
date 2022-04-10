//
// Created by 22126 on 2022/4/9.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_TIME_H
#define INTRODUCTION_TO_C___EXERCISE_TIME_H


class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time();

    Time(int);

    int getHour() const;

    int getMinute() const;

    int getSecond() const;

    void displayTime() const;

};


#endif //INTRODUCTION_TO_C___EXERCISE_TIME_H
