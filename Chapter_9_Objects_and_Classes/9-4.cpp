// create by 22126 
// 2022/4/9 20:42
#include <iostream>
#include "MyPoint.h"

using namespace std;

int main() {
    MyPoint point1(0, 0), point2(10, 30.5);
    cout << "The distance between two points is " << point1.distance(point2) << endl;

    return 0;
}
