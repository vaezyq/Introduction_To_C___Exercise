// create by 22126 
// 2022/4/10 14:55
#include <iostream>
#include "LinearEquation.h"

using namespace std;

int main() {

    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cin >> x1 >> x2 >> x3 >> x4;
    cin >> y1 >> y2 >> y3 >> y4;

    int a = (y1 - y2);
    int b = (-x1 + x2);
    int c = (y3 - y4);
    int d = (-x3 + x4);
    int e = -y1 * (x1 - x2) + (y1 - y2) * x1;
    int f = -y3 * (x3 - x4) + (y3 - y4) * x3;

    LinearEquation le(a, b, c, d, e, f);
    if (!le.isSolvable()) {
        cout << "The equation has no solution." << endl;
        return 0;
    }
    cout << le.getX() << " " << le.getY() << endl;


    return 0;
}
