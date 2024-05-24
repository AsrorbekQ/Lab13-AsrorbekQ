#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
#include <array>
#include "list"
using namespace std;

int main() {

    cout << "Probelm 1\n";
    vector<double> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    for (auto i = vec.begin(); i != vec.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    cout << "Problem 2\n";
    vector <int> vect;
    int yt;
    while (cin >> yt) {
        vect.push_back(yt);
    }
    cin.clear();

    cout << vect.front() << " " << vect.back() << endl;

    cout << "Problem 3\n";
    int tyr;
    vector<int> vecy;

    for (int i = 0; i < 8; ++i) {
        cin >> tyr;
        vecy.push_back(tyr);
    }

    if(vecy.empty()){
        cout << "not empty\n";
    }else{
        cout << "empty\n";
    }
    // test with 1-8 numbers for ease
    vecy.erase(vecy.begin() + 3);
    vecy.erase(vecy.begin());
    vecy.erase(vecy.begin());

    cout << "Remaining vector: \n";
    for (auto i = vecy.begin(); i != vecy.end(); i++){
        cout << *i << " ";
    }

    cout << "Problem 4\n";
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<double> > matrix(n, vector<double>(n, 0.0));

    cout << "Enter the elements of the matrix: " << endl;

    for (auto row_it = matrix.begin(); row_it != matrix.end(); ++row_it) {
        for (auto col_it = row_it->begin(); col_it != row_it->end(); ++col_it) {
            cin >> *col_it;
        }
    }

    cout << "Your matrix: " << endl;
    for (auto row_it = matrix.begin(); row_it != matrix.end(); ++row_it) {
        for (auto col_it = row_it->begin(); col_it != row_it->end(); ++col_it) {
            cout << *col_it << " ";
        }
        cout << endl;
    }

    cout << "Problem 5\n";
    list<double> list1;
    list1.assign({3.3, 4.5, 6.7});
    list<double> list2;
    list2.assign({1, 2, 3});
    list<double> list3;
    list3.assign({8, 9.5, 10.3});

    list<double> list4;

    list4.insert(list4.end(), list3.begin(), list3.end());
    list4.insert(list4.end(), list1.begin(), list1.end());
    list4.insert(list4.end(), list2.begin(), list2.end());

    cout << "Merged list: ";
    for (const double& value : list4) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Problem 7\n";
    deque<int> deq;
    deq.push_back(5);
    deq.push_front(7);
    deq.push_back(10);
    deq.push_front(20);

    cout << "The deque: " << endl;
    for (int e = 0; e <deq.size() ; ++e) {
        cout<<deq[e]<<endl;
    }
    cout << "Size: " << deq.size() << endl;
    cout << "3rd element: " << deq[3] << endl;
    cout << "First element: " << *(deq.begin()) << " " << "Last element: " << *(deq.end()) << endl;
    deq.pop_front();
    deq.pop_back();
    deq.clear();


    return 0;
}
