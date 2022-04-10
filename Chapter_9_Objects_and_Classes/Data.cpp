//
// Created by 22126 on 2022/4/10.
//

#include "Data.h"
#include<ctime>

Data::Data(int year, int month, int day) : year(year), month(month), day(day) {}

int Data::getYear() const {


    return year;
}

int Data::getMonth() const {
    return month;
}

int Data::getDay() const {
    return day;
}

bool Data::isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}


void Data::setData(long seconds) {
    year = 1970;
    long minutes = seconds / 60;
    long hours = minutes / 60;
    long days = hours / 24;
    while (days >= (isLeapYear(year) ? 366 : 365)) {
        days -= (isLeapYear(year) ? 366 : 365);
        year++;
    }

    month = 1;
    while (days >= getNumOfDaysInMonths(year, month)) {
        days -= getNumOfDaysInMonths(year, month);
        month++;
    }
    day = days + 1;

}

Data::Data() {
    setData(time(0));
}

Data::Data(long seconds) {
    setData(seconds);
}

int Data::getNumOfDaysInMonths(int year, int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    if (month == 2) return isLeapYear(year) ? 29 : 28;

    return 0; // If month is incorrect
}
