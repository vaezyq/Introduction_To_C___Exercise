// create by 22126 
// 2022/4/14 16:49
#include <iostream>
#include "Rectangle2D.h"
#include <algorithm>

using namespace std;

int main() {
    auto *widthArray = new double[5];
    auto *heightArray = new double[5];
    for (auto i = 0; i < 5; i++) {
        cin >> widthArray[i];
        cin >> heightArray[i];
    }


    auto maxWidth = max_element(widthArray, widthArray + 5);
    auto minWidth = min_element(widthArray, widthArray + 5);
    cout << *maxWidth << " " << *minWidth << endl;

    auto maxHeight = max_element(heightArray, heightArray + 5);
    auto minHeight = min_element(heightArray, heightArray + 5);

    Rectangle2D rec((*maxWidth + *minWidth) / 2.0, (*maxHeight + *minHeight) / 2.0,
                    *maxWidth - *minWidth, *maxHeight - *minHeight);

    cout << "The bounding rectangle's center (" << rec.getX() << "," << rec.getX() << "), width " <<
         rec.getWidth() << ", height " << rec.getHeight() << endl;

    return 0;
}
