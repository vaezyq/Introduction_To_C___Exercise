// create by 22126 
// 2022/4/10 17:19
#include <iostream>
#include <vector>

using namespace std;


int printGene(string &str) {

    int count = 0;
    decltype(str.find("ATG")) end = 0;
    while (true) {
        auto start = str.find("ATG", end);
        end = min(str.find("TAG", end), str.find("TAA", end));
        end = min(end, str.find("TGA", end));
        if (start == string::npos || end == string::npos) {
            return count;
        }
        count++;
        for (auto i = start + 3; i < end; ++i) {
            cout << str[i];
        }
        cout << endl;
        end += 3;
    }
    return count;
}

int main() {

    string gene;
    cout << "Enter a genome string: " << endl;
    cin >> gene;
    if (printGene(gene) == 0) {
        cout << "no gene is found" << endl;
    }




//    for (auto e: vec) {
//        cout << "," << e;
//    }
//    cout << "]";

//    string genomeString;
//    cout << "Enter a genome string: " << endl;


    return 0;
}
