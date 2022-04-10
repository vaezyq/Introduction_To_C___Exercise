// create by 22126 
// 2022/4/10 20:55
#include <iostream>
#include <algorithm>

using namespace std;


string sort(string &s) {
    sort(s.begin(), s.end());
    return s;
}

int main() {
    string unSortedString;
    cout << "Enter a string s: " << endl;
    cin >> unSortedString;
    string sortedString = sort(unSortedString);
    cout << "The sorted string is " << sortedString;
    return 0;
}
