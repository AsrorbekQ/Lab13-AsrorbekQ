#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
#include <array>
using namespace std;

int main() {

    cout << "Probelm 1\n";
    vector<double> vec;
    vec = {1, 2, 3, 4};

    for (size_t i = 0; i < vec.size(); i++){
        cout << *(vec.begin() + i) << " ";
    }
    cout << endl;

    for (size_t i = 0; i < vec.size(); i++){
        cout << *(vec.end() - i - 1) << " ";
    }    
    cout << endl;

    return 0;
}
