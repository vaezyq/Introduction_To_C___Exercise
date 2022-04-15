// create by 22126 
// 2022/4/14 20:31
#include <iostream>

using namespace std;

template<typename T>
void selectSort(T *array, int size) {
    for (auto i = size - 1; i >= 1; --i) {
        T maxValue = array[i];
        int maxValueIndex = i;
        for (auto j = 0; j < i; ++j) {
            if (maxValue < array[j]) {
                maxValue = array[j];
                maxValueIndex = j;
            }
        }
        swap(array[maxValueIndex], array[i]);
    }
}

int main() {

    int arr1[5]{13, 2, 35, 4, 5};
    double arr2[5]{22, 5, 6, 76, 8};
    selectSort(arr1, 5);
    selectSort(arr2, 5);
    for (auto e: arr1) {
        cout << e << " ";
    }
    cout << endl;
    for (auto e: arr2) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
