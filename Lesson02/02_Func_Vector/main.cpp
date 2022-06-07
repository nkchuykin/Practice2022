#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

/* int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

string sum(string a, string b){
    return a + b;
} */

template<typename T>
T sum(T a, T b){
    return a + b;
}

int sum(int a, int b, int c){
    return sum(a, sum(b,c));
}

void PrintVector(const vector<int>& v)
{
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

template<typename Action>
void PrintVector(const vector<int>& v, Action smth)
{
    for (int i : v) {
        cout << smth(i) << " ";
    }
    cout << endl;
}

int twice(int x){
    return 2*x;
}

int main() {
    vector<int> v {3,1,2,5,4};
    //v[6] = 8; UB
    //v.at(6) = 8; // RE
    // size_t == unsigned long long   ID
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;



    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[v.size()- i - 1] << " ";
    }
    cout << endl;


    vector<int> v2;
    v2.reserve(10);
    for (int i = 0; i < 10; ++i) {
        v2.push_back(i);
    }
    PrintVector(v2);

    vector<int> v3(10);
    for (int i = 0; i < 10; ++i) {
        v2[i] = i;
    }
    PrintVector(v2);


    sort(v.begin(), v.end());
    PrintVector(v);

    cout << "-------------------\n";
    cout << sum(string("323"),string("4")) << endl;
    //PrintVector(sum(vector<int>(3),vector<int>(3))); CE
    cout << "-------------------\n";

    PrintVector(v, twice);

    PrintVector(v, [](int x)
    {
        return x * 3;
    });

    int num;
    cin >> num;
    // & - all local by ref
    // = - all local by copy
    // num - num by copy
    // &num - num by ref
    PrintVector(v, [&](int x)
    {
        return x * num;
    });

}
