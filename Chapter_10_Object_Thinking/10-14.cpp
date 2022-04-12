// create by 22126 
// 2022/4/12 11:35
#include <iostream>
#include <vector>
#include "StackOfIntegers.h"

using namespace std;

int main() {
    vector<bool> isPrimer(101, true);
    for (int i = 2; i <= 100; ++i) {
        if (isPrimer[i]) {
            for (int j = 2; i * j <= 100; ++j) {
                isPrimer[i * j] = false;

            }
        }
    }
    StackOfIntegers si;
    for (int i = 2; i <= 100; ++i) {
        if (!isPrimer[i]) {
            si.push(i);
        }
    }

//    cout << si.pop();
    while (!si.isEmpty()) {
        cout << si.pop() << " ";
    }

    return 0;
}
