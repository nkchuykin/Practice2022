#include <iostream>
#include <vector>

using namespace std;

int main() {
    //built-in
    int x = 42;
    double d = 0;
    // c++ classes
    string s = "1234";
    vector<int> v {1,2,3,4,5};
   //cout <<string ("abc");
    int x1 = x;
    x1++;
    cout << x1  << " " << x << endl;

    string s1 = s;
    //s1[2] = 8; // символ с кодом 8 ERROR
    s1[2] = '8'; // символ 8 OK
    s1 += "5678";
    cout << s1 << " " << s << endl;

    cout << "-------" << endl;
    int& ref_to_x = x;
    ref_to_x++;
    cout << ref_to_x  << " " << x << endl;

    cout << "-------" << endl;
    const int& const_ref_to_x = x;
    x++;
    cout << const_ref_to_x  << " " << x << endl;
    cout << "-------" << endl;
    const string& ref_to_temp = "12345";
    cout << ref_to_temp << endl;

    cout << "-------" << endl;
    int* pInt = &x;
    (*pInt)++;
    cout << *pInt << " " << x << endl;

    cout << "-------" << endl;

    double y = 3.0;
    // int k ; implicit cast - BAD
    // construct double
    int k = double(y);
    // C-Style cast
    int k1 = (double)y;
    //long& d_ref = static_cast<long&>(const_ref_to_x);
    //cout << const_ref_to_x << " " << d_ref << " " << x << endl;
    //d_ref++;
    //cout << const_ref_to_x << " " << d_ref << " " << x << endl;

    // C++ cast
    int k2 = static_cast<int>(y);


    // const cast
    int& not_const_ref = const_cast<int&>(const_ref_to_x);






    k = (int)(y);
    return 0;
}
