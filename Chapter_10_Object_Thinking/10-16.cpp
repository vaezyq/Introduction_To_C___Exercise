// create by 22126 
// 2022/4/11 15:54
#include <iostream>
#include "StackOfIntegers.h"

using namespace std;

int main() {

    StackOfIntegers si;
    int num;
    cin >> num;
    for (auto i = 1; i <= 10; ++i) {
        si.push(i * num);
    }
    while (!si.isEmpty()) {
        cout << si.pop() << " ";
    }

    return 0;
}
