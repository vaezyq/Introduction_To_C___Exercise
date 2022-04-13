// create by 22126 
// 2022/4/12 22:39
#include <iostream>
#include<algorithm>

using namespace std;


void bubbleSort(int *const array, int size) {
    for (int i = size - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {

    int array[5]{1, 2, 3, 4, 5};
    random_shuffle(array, array + 5);

    for (const auto e: array) {
        cout << e << " ";
    }
    cout << endl;
    bubbleSort(array, 5);
    for (const auto e: array) {
        cout << e << " ";
    }

    return 0;
}
