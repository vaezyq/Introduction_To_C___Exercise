//
// Created by 22126 on 2022/4/10.
//

#include "StopWatch.h"
#include<ctime>

long StopWatch::getStartTime() const {
    return startTime;
}

long StopWatch::getEndTime() const {
    return endTime;
}

void StopWatch::start() {
    startTime = time(0);
}

void StopWatch::stop() {
    endTime = time(0);
}

int StopWatch::getElapsedTime() const {
    return endTime - startTime;
}

StopWatch::StopWatch() {
    startTime = time(0);
}
