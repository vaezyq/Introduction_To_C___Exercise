//
// Created by 22126 on 2022/4/14.
//

#include "MyDate.h"
#include <ctime>

MyDate::MyDate() {
    setData(time(0));
}

bool MyDate::isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}


int MyDate::getNumOfDaysInMonths(int year, int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    if (month == 2) return isLeapYear(year) ? 29 : 28;

    return 0; // If month is incorrect
}

void MyDate::setData(long seconds) {
    this->year = 1970;
    auto day_m = seconds / (3600 * 24);

    while (day_m >= (isLeapYear(this->year) ? 366 : 365)) {
        this->year++;
        day_m -= (isLeapYear(this->year) ? 366 : 365);
    }
    month = 0;
    while (day_m >= getNumOfDaysInMonths(year, month)) {
        day_m -= getNumOfDaysInMonths(year, month);
        month++;
    }
    this->day = ++day_m;
}


MyDate::MyDate(int year, int month, int day) : year(year), month(month), day(day) {}

int MyDate::getYear() const {
    return year;
}

void MyDate::setYear(int year) {
    MyDate::year = year;
}

int MyDate::getMonth() const {
    return month;
}

void MyDate::setMonth(int month) {
    MyDate::month = month;
}

int MyDate::getDay() const {
    return day;
}

void MyDate::setDay(int day) {
    MyDate::day = day;
}
