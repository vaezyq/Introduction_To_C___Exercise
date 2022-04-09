// create by 22126 
// 2022/4/9 17:46
#include <iostream>
#include "Rectangle.h"
#include<iomanip>

using namespace std;

void displayRectangleProperties(const Rectangle &rect) {
//    setiosflags(ios::left);
    cout << setiosflags(ios::left) << setw(16) << "width" << setw(16) << rect.getWidth() << endl <<
         setw(16) << "height" << setw(16) << rect.getHeight() << endl <<
         setw(16) << "area" << setw(16) << rect.getArea() << endl <<
         setw(16) << "primers" << setw(16) << rect.getPerimeter() << endl;
}


int main() {
    Rectangle rect1(4, 40), rect2(3.5, 35.9);
    displayRectangleProperties(rect1);
    displayRectangleProperties(rect2);
    return 0;
}
