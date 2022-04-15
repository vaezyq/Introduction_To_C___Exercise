// create by 22126 
// 2022/4/14 20:28
#include <iostream>

using namespace std;

template<typename T>
T minimumValue(T *arr, int size) {
    auto min = arr[0];
    for (auto i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr1[5]{1, 2, 3, 4, 5};
    double arr2[5]{2, 5, 6, 7, 8};
    cout << minimumValue(arr1, 5) << endl;
    cout << minimumValue(arr2, 5) << endl;

    return 0;
}
