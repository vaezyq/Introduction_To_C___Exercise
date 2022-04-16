// create by 22126 
// 2022/4/15 16:12
#include <iostream>

using namespace std;

const int NUMBER_OF_QUEENS = 8;
int queues[NUMBER_OF_QUEENS];


bool isValid(int row, int column) {
    for (int i = 1; i <= row; ++i) {
        if ((queues[row - i] == column) || (queues[row - i] == column - i) || (queues[row - i] == column + i)) {
            return false;
        }
    }
    return true;

}

bool search(int row) {
    if (row == NUMBER_OF_QUEENS) {
        return true;
    }
    for (int i = 0; i < NUMBER_OF_QUEENS; ++i) {
        queues[row] = i;
        if (isValid(row, i) && search(row + 1)) {
            return true;
        }
    }
    return false;

}


void printResult() {
    cout << "\n---------------------------------\n";
    for (int row = 0; row < NUMBER_OF_QUEENS; row++) {
        for (int column = 0; column < NUMBER_OF_QUEENS; column++)
            printf(column == queues[row] ? "| Q " : "| ");
        cout << "|\n---------------------------------\n";
    }
}


int main() {
    search(0);
    printResult();
    return 0;
}
