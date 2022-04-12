//
// Created by 22126 on 2022/4/11.
//

#include "Location.h"


int Location::getRow() const {
    return row;
}

int Location::getColumn() const {
    return column;
}

double Location::getMaxValue() const {
    return maxValue;
}

void Location::setRow(int row) {
    Location::row = row;
}

void Location::setColumn(int column) {
    Location::column = column;
}

void Location::setMaxValue(double maxValue) {
    Location::maxValue = maxValue;
}

Location::~Location() {

}

Location::Location(int row, int column, double maxValue) : row(row), column(column), maxValue(maxValue) {}
