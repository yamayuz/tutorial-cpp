#include <iostream>

using namespace std;

int main()
{
    // 値を指定しない要素は0で初期化される
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {9, 8};

    for (int i = 0; i < 5; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';

    cout << "-----------------" <<'\n';

    for (int i = 0; i < 5; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';
}