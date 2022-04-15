// create by 22126 
// 2022/4/15 21:47
#include <iostream>

using namespace std;

void evenAndOddCount(int value, int evenNumber, int oddNumber) {
    if (value == 0) {
        cout << "evenNumber: " << evenNumber << "oddNumber: " << oddNumber << endl;
    } else {
        if ((value % 10) % 2 == 0) {
            evenAndOddCount(value / 10, evenNumber, ++oddNumber);
        } else {
            evenAndOddCount(value / 10, ++evenNumber, oddNumber);
        }

    }
}

void evenAndOddCount(int value) {
    evenAndOddCount(value, 0, 0);
}


int main() {

    cout << "please enter an number:";
    int num;
    cin >> num;
    evenAndOddCount(num);

    return 0;
}
