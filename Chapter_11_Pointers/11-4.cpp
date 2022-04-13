// create by 22126 
// 2022/4/12 23:27
#include <iostream>

using namespace std;


int sumOfEven(const int *array, int size) {
    int sum = 0;
    for (auto i = 0; i < size; i += 2) {
        sum += array[i];
    }
    return sum;
}

double sumOfEven(const double *array, int size) {
    double sum = 0;
    for (auto i = 0; i < size; i += 2) {
        sum += array[i];
    }
    return sum;
}

int main() {

    int array[5]{1, 2, 3, 4, 5};
    cout << sumOfEven(array, 5) << endl;

    double array_dou[5]{1, 2, 3, 4, 5};
    cout << sumOfEven(array_dou, 5) << endl;

    return 0;
}
