//
// Created by 22126 on 2022/4/9.
//

#include "Time.h"
#include <ctime>
#include <iostream>

using namespace std;

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

Time::Time() {
    time_t timeReal;
    time(&timeReal);
    timeReal = timeReal + 8 * 3600;
    tm *t = gmtime(&timeReal);
    hour = t->tm_hour;
    minute = t->tm_min;
    second = t->tm_sec;
}

Time::Time(int seconds) {
    int iSeconds = seconds - (seconds / (3600 * 24)) * (3600 * 24);
    this->hour = iSeconds / 3600;
    this->minute = (iSeconds % 3600) / 60;
    this->second = iSeconds  % 60;
}

void Time::displayTime() const {
    cout << "hour " << hour <<" "
         "minute " << minute <<" "
         "seconds " << second << endl;
}



