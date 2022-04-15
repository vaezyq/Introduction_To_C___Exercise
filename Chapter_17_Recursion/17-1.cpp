// create by 22126 
// 2022/4/15 19:40
#include <iostream>

using namespace std;

int linearSearch(const int *array, int key, int high) {
    if (array[high] == key) {
        return high;
    } else if (high == 0) {
        return -1;
    } else {
        return linearSearch(array, key, high - 1);
    }
}

int highSearch(const int *array, int key) {
    return linearSearch(array, key, 3);
}


int main() {

    int array[]{1, 2, 3, 4, 5};
    cout << linearSearch(array, 2, 3);
    return 0;
}
