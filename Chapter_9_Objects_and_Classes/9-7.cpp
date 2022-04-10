// create by 22126 
// 2022/4/10 16:03

// 这里如何得到毫秒级的时间，存疑
#include <iostream>
#include <array>
#include <algorithm>
#include "StopWatch.h"

using namespace std;

int main() {

    array<int, 100000> arr;
    for (auto i = 0; i < 100000; i++) {
        arr[i] = i;
    }
    random_shuffle(arr.begin(), arr.end());

    StopWatch sw;

    sw.start();

    sort(arr.begin(), arr.end());
    sw.stop();
    cout << sw.getElapsedTime();

    return 0;
}
