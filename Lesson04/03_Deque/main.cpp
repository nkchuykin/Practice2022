#include <iostream>
#include <deque> // double-ended queue

using namespace std;

//     0 1 2 3 4 5
//      v1 1 2 5 . . .
// . . 7 2 v2
//    <---
int main() {
    deque<int> d{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    d[4] = 3;
    d.push_front(123);
    d.push_front(2);
    d.push_front(3);
    d.push_front(113);
    std::sort(d.begin(), d.end());
    for (auto num : d) {
        cout << num << " ";
    }
    cout << "\n";

    std::stable_sort(d.begin(), d.end(), [](int f, int s) {
        return f % 2 < s % 2;
    });
    for (auto num : d) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
