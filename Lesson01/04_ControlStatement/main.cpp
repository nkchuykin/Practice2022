#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    // 3 & 4  == 0
    // && - и   and
    // || - или or
    // ! - отрицание
    //  b!=0 &&  a/b > 3 OK!
    //  b!=0 & a/b > 3 RE
    if (x % 2 == 0 && x > 0) {
        cout << "even\n";
    } else {
        cout << "odd or negative\n";
    }
    int n = 5;
    while(n--) {
        cout << n << "\n";
    }
    while(n>=0) {
        cout << n << "\n";
        n -=1; // n--; --n;
    }
    {
        int k = 4;
        int pr = k++;
        cout << pr <<" " << k<< "\n";
        int po = ++k;
        cout << po <<" " << k<< "\n";
    }

    {
        do {
            break;
            continue;
        } while(true);
    }
    {
        for(int n = 5; n >= 0; n -=1, n-=1) {
            cout << n << "\n";
            // n--; --n;
        }
        for(;;){
            break;
        }
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
