// create by 22126 
// 2022/4/14 15:36
#include <iostream>

using namespace std;


int *countDigits(const int &number) {
    int *counts = new int[10];
    for (auto i = 0; i < 10; i++) {
        counts[i] = 0;
    }
    auto tmp = number;
    while (tmp) {
        counts[tmp % 10]++;
        tmp /= 10;
    }
    return counts;

}

int main() {
    int *counts = countDigits(11223);
    for (auto i = 0; i < 10; i++) {
        cout << counts[i] << " ";
    }
    return 0;
}
