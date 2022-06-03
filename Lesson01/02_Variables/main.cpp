#include <iostream>

using namespace std;

int main() {
    // bool true (1) false (0)  - 1 байт от 0 до 255
    // char - символьный тип 1 байт и от -128 до 127 или от 0 до 255 (unsigned char)
    // short (int) - числовой тип вероятно 2 байта
    // int - числовой тип вероятно 4 байта -2*10^9 .. 2*10^9
    // long (int) - числовой тип вероятно 4 или 8 байт
    // long long (int) - числовой тип 8 байт

    int64_t v1 = 3;

    //string s;


    unsigned short x = -1;
    cout << x;
    unsigned int y = 3;
    // x = "abc"; CE
    //x = (15+3)*(7-2);
    
    /*if (x)    {
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }*/
    return 0;
}
