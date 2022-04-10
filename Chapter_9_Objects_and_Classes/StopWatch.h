//
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_STOPWATCH_H
#define INTRODUCTION_TO_C___EXERCISE_STOPWATCH_H


class StopWatch {
private:
    long startTime;
    long endTime;

public:
    StopWatch();

    long getStartTime() const;

    long getEndTime() const;

    void start();

    void stop();

    int getElapsedTime() const;
};


#endif //INTRODUCTION_TO_C___EXERCISE_STOPWATCH_H
