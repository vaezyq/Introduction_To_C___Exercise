// create by 22126 
// 2022/4/16 12:18
#include <iostream>

using namespace std;

int smallestNum(int *array, int size) {
    if (size == 0) {
        return array[size];
    }
    int res = array[size];
    auto num = smallestNum(array, size - 1);
    if (res > num) {
        res = num;
    }
    return res;
}


int main() {
    int array[]{12, 5, 1, 8, 9};
    cout << smallestNum(array, 5);

    return 0;
}
