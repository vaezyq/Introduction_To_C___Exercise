// create by 22126 
// 2022/4/10 21:43
#include <iostream>

using namespace std;


void countDigits(const int &number, int dArray[], int size) {
    auto num = number;
    while (num != 0) {
        dArray[num % 10] += 1;
        num /= 10;
    }
}

int main() {

    int num;
    cout << "enter a number" << endl;
    cin >> num;
    constexpr int size = 10;
    int dArray[size]{0};
    countDigits(num, dArray, size);
    for (auto i = 0; i < size; ++i) {
        cout << dArray[i] << " ";
    }


    return 0;
}
