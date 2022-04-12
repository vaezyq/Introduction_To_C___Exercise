// create by 22126 
// 2022/4/11 14:02
#include <iostream>
#include "Location.h"

using namespace std;
const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;

Location locateLargest(const double a[ROW_SIZE][COLUMN_SIZE]) {
    int row = 0;
    int column = 0;
    int maxValue = a[row][column];
    cout << "Enter a 3-by-4 two-dimensional array:" << endl;
    for (auto i = 0; i < ROW_SIZE; ++i) {
        for (auto j = 0; j < COLUMN_SIZE; ++j) {
            if (a[i][j] > maxValue) {
                row = i;
                column = j;
                maxValue = a[i][j];
            }
        }
    }
    return Location(row, column, maxValue);
}

int main() {
    double array[ROW_SIZE][COLUMN_SIZE];
    for (auto i = 0; i < ROW_SIZE; ++i) {
        for (auto j = 0; j < COLUMN_SIZE; ++j) {
            cin >> array[i][j];
        }
    }
    Location l = locateLargest(array);

    cout << "The location of the largest element is " << l.getMaxValue() << " at (" << l.getRow() << ","
         << l.getColumn() << ")" << endl;

    return 0;
}
