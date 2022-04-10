// create by 22126 
// 2022/4/10 15:29
#include <iostream>
#include"Data.h"

using namespace std;

int main() {
//    cout << time(0);

    Data date;
    cout << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << endl;

    Data date1(561555550);
    cout << date1.getYear() << "/" << date1.getMonth() << "/" << date1.getDay() << endl;

    return 0;
}
