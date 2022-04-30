#include <iostream>

using namespace std;

int main()
{
    int a[4][3];

    // sizeof()配列に適用すると、
    // [sizeof(要素型) * 要素数]を返す
    cout << "sizeof(a)       : " << sizeof(a) << '\n';
    cout << "sizeof(a[0])    : " << sizeof(a[0]) << '\n';
    cout << "sizeof(a[0][0]) : " << sizeof(a[0][0]) << '\n';

    cout << "-----------------" <<'\n';

    // 上記を利用して2次元配列の行数と列数が計算できる
    int a_row_size = sizeof(a) / sizeof(a[0]);              // 行
    int a_column_size = sizeof(a[0]) / sizeof(a[0][0]);     // 列
    int a_size = sizeof(a) / sizeof(a[0][0]);               // aの構成要素数

    cout << "行数   : " << a_row_size << '\n';
    cout << "列数   : " << a_column_size << '\n';
    cout << "要素数 : " << a_size << '\n';

}