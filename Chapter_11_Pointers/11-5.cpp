// create by 22126 
// 2022/4/12 23:35
#include <iostream>

using namespace std;

int largestNum(int *array, int size) {
    int max = array[0];
    for (auto i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int array[8]{6, 7, 9, 10, 15, 3, 99, -21};
    cout << largestNum(array, 8);

    return 0;
}
/**/