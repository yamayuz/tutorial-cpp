// 2つの2次元配列の和を求める
#include <iostream>

using namespace std;

int main()
{
    int a[2][3] = { 
        {1, 2, 3}, 
        {4, 5, 6},
    };
    int b[2][3] = {
        {6, 3, 4},
        {5, 1, 2},
    };
    int c[2][3];

    // 配列の和を計算
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];


    // 配列aの要素を表示
    cout << "----------\n";
    cout << "行列a\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    cout << "----------\n";


    // 配列bの要素を表示
    cout << "行列b\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << b[i][j] << ' ';
        cout << '\n';
    }
    cout << "----------\n";


    // 配列cの要素を表示
    cout << "行列c\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << c[i][j] << ' ';
        cout << '\n';
    }
    cout << "----------\n";
}