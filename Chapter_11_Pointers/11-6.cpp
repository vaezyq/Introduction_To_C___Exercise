// create by 22126 
// 2022/4/13 11:21
#include <iostream>

using namespace std;
const int SIZE = 10;

int *count(const string &s) {
    int *countNum = new int[SIZE];
    for (auto i = 0; i < SIZE; ++i) {
        countNum[i] = 0;
    }
    for (char i: s) {
        if (i >= 48 && i <= 58) {
            countNum[static_cast<int>(i - 48)]++;
        }
    }
    return countNum;
}


void count(const string &s, int counts[], int size) {
    for (char i: s) {
        if (i >= 48 && i <= 58) {
            counts[static_cast<int>(i - 48)]++;
        }
    }
}

int main() {
    string s{""};
    getline(std::cin, s, '\n');


    int *countNum_v1 = count(s);
    for (auto i = 0; i < SIZE; ++i) {
        cout << countNum_v1[i] << " ";
    }
    cout << endl;


    int *countNum_v2 = new int[SIZE];
    for (auto i = 0; i < SIZE; ++i) {
        countNum_v2[i] = 0;
    }
    count(s, countNum_v2, SIZE);
    for (auto i = 0; i < SIZE; ++i) {
        cout << countNum_v2[i] << " ";
    }
    cout << endl;

    return 0;
}









