#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> v{1,2,3,4,5,6};

    vector<int>::iterator b = v.begin();
    vector<int>::reverse_iterator x1 = v.rbegin();
    vector<int>::const_iterator x2 = v.cbegin();
    vector<int>::const_reverse_iterator x3 = v.crbegin();

    //*x2 = 5l;

    auto e = v.end();

    v.push_back(7);

    for (auto num: v) {
        cout << num << " ";
    }
    cout << endl;
    // invalidation of iterators
    for (auto i = b; i != e ; ++i) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = v.rbegin(); i != v.rend() ; ++i) {
        cout << *i << " ";
    }
    cout << endl;

    //RA Iterator
    //b = b + 5;
    // slowly, but work for any iterators
    advance(b,3);
    auto n = next(b,1);
    cout << *b << endl;
    cout << *n << endl;

    return 0;
}
