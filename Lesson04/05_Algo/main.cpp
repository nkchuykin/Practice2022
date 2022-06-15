#include <iostream>
#include <vector>
#include <forward_list>
#include <algorithm>

using namespace std;

template<typename Iter, typename Pred>
bool AnyOf(Iter begin, Iter end, Pred func){
    for (Iter it = begin; it!=end; ++it) {
        if(func(*it))
            return true;
    }
    return false;
}

template<typename InIter, typename OutIter>
void Copy(InIter begin, InIter end, OutIter out){
    for (InIter it = begin; it != end; ++it) {
        *out = *it;
        out++;
    }
}



int main() {
    vector<int> v = {1,2,3,4,5,5,5,6,7,8,9,10};

    //v.erase(v.begin()+1);


    auto it = std::remove_if(v.begin(), v.end(), [](int x){
        return x%2 == 0;
    });
    v.erase(it, v.end());


    Copy(v.begin(),v.begin()+5, inserter(v,v.end()-2));
    for (auto n: v) {
        cout << n << " ";
    }
    cout << "\n";

    cout << "-----------------\n";
    //v.reserve(v.size()+5);
    //copy(v.begin(),v.begin()+5, back_inserter(v));

    //vector<int> tmp {v.begin(),it};

    auto x1 = binary_search(v.begin(),v.end(),5);
    auto x2 = lower_bound(v.begin(),v.end(),5); // FIRST >= 5
    auto x3 = upper_bound(v.begin(),v.end(),5); // FIRST > 5

    cout << x1 << endl;
    cout << *x2 << endl;
    cout << *x3 << endl;
    cout << x3 - x2 << endl;

    for (auto n: v) {
        cout << n << " ";
    }
    cout << "\n";

    cout << "-----------------\n";

    cout << boolalpha << AnyOf(v.begin(),v.end(),[](int x) {
        return x % 2 == 0;
    }) << endl;
    cout << boolalpha << AnyOf(v.begin(),v.end(),[](int x) {
        return x % 3 == 0;
    }) << endl;

    forward_list<int> lst {1,2,3,4,5,6,7,8,9,10};
    cout << boolalpha << AnyOf(lst.begin(),lst.end(),[](int x) {
        return x == 10;
    }) << endl;
    return 0;
}
