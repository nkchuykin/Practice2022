#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y; // >> из потока
    // << в поток
    cout << x << " + " << y << " = " << x + y << endl; //endl можно заменить на "\n"


    string x1;
    string y1;
    cin >> ws; // without spaces
    getline(cin,x1,'\n');
    getline(cin,y1);

    //cin >> x1 >> y1; // >> из потока
    // << в поток
    cout << "\"" << x1 << "\" + \"" << y1
    << "\" = " << x1 + y1 << endl; //endl можно заменить на "\n"
    // + - * / % - есть  ** // - нет
    //  / - если оба операнда целые то целочисленное деление иначе обычно.
    double v = 1.0 / 3;
    cout << setprecision(2) << v;
    return 0;
}
