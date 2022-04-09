// create by 22126 
// 2022/4/9 18:06
#include <iostream>
#include "Fan.h"
#include<iomanip>

using namespace std;


void displayFanProperties(const Fan &fan) {
//    setiosflags(ios::left);
    cout << setiosflags(ios::left) << setw(16) << "speed" << setw(16) << fan.getSpeed() << endl <<
         setw(16) << "isOn" << setw(16) << boolalpha << fan.isOn() << endl <<
         setw(16) << "radius" << setw(16) << fan.getRadius() << endl;
}

int main() {
    Fan fan1, fan2;
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    fan2.setSpeed(2);
    fan2.setRadius(5);
    displayFanProperties(fan1);
    displayFanProperties(fan2);

    return 0;
}
