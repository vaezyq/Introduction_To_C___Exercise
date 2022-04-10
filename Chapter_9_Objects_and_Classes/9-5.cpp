// create by 22126 
// 2022/4/9 21:40
#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    Time time1;
    time1.displayTime();

// 这里显示的seconds是10而不是9，这里应是因为定义秒的区别
    Time time2(555550);
    time2.displayTime();

    return 0;
}
