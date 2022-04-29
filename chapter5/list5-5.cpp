#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    char b[] = {'1', '2', '3'};

    // sizeof()配列に適用すると、
    // [sizeof(要素型) * 要素数]を返す
    cout << "sizeof(a)    : " << sizeof(a) << '\n';
    cout << "sizeof(a[0]) : " << sizeof(a[0]) << '\n';
    cout << "sizeof(b)    : " << sizeof(b) << '\n';
    cout << "sizeof(b[0]) : " << sizeof(b[0]) << '\n';

    cout << "-----------------" <<'\n';

    // 上記を利用して配列の要素数が計算できる
    int a_size = sizeof(a) / sizeof(a[0]);
    int b_size = sizeof(b) / sizeof(b[0]);

    cout << "a_size : " << a_size << '\n';
    cout << "b_size : " << b_size << '\n';

}