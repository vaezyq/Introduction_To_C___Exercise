// create by 22126 
// 2022/4/10 22:01
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<string>> vec;
    vector<string> vec1{"Alabama", "Montgomery"};
    vector<string> vec2{"Alaska", "Juneau"};
    vector<string> vec3{"Arizona", "Phoenix"};
    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);
    string city;
    for (const auto &v: vec) {
        cout << "What is the capital of " << v[0] << "?";
        cin >> city;
        if (city == v[1]) {
            cout << "Your answer is correct." << endl;
        } else {
            cout << "The capital of Alaska is " << v[1] << endl;
        }
    }
    return 0;
}















