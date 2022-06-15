#include <iostream>
#include <list>
#include <forward_list>

using namespace std;




int main() {

    list<int> lst {1,2,3,4,5,6};

    auto it = lst.insert(lst.end(),13);
    lst.push_back(300);
    lst.push_front(15);
    lst.insert(it,14);

    //sort(lst.begin(),lst.end());
    lst.sort();

    for(auto num : lst){
        cout << num << " ";
    }
    cout << "\n";

    forward_list<int> fw_lst{lst.begin(),lst.end()};
    fw_lst.begin()++;
    fw_lst.push_front(12);
    //not supported for forward list
    //fw_lst.push_back(12);
    for(auto num : fw_lst){
        cout << num << " ";
    }

    cout << "\n";

    return 0;
}
