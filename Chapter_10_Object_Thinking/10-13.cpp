// create by 22126 
// 2022/4/12 13:45
#include <iostream>
#include "Geometry.h"

using namespace std;


void displayProperties(const Geometry g) {
    cout << "Perimeter: " << g.getPerimeter() << endl << "area: " << g.getArea() << endl;
}

int main() {
    Geometry g1;

    Geometry g2(6, 4);

    Geometry g3(10, 4, 5.6, 7.8);

    displayProperties(g1);
    displayProperties(g2);
    displayProperties(g3);

    return 0;
}
