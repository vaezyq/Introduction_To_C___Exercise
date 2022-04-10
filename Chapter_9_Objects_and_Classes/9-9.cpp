// create by 22126 
// 2022/4/10 13:23
#include <iostream>
#include "LinearEquation.h"

using namespace std;

int main() {
    LinearEquation le1(1, 1, 1, 2, 2, 7);
    if (!le1.isSolvable()) {
        cout << "The equation has no solution." << endl;
        return 0;
    }
    cout << le1.getX() << " " << le1.getY() << endl;

    return 0;
}
