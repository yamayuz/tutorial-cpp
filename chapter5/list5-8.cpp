// 配列の要素の並びを反転する
#include <iostream>

using namespace std;

int main()
{
    const int num_elm = 7;
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    // 反転前の配列を表示
    for (int i = 0; i < num_elm; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';

    // 反転
    for (int i = 0; i < num_elm / 2; i++) {
        int temp = a[i];
        a[i] = a[num_elm - 1 - i];
        a[num_elm - 1 - i] = temp;
    }

    // 反転後の配列を表示
    cout << "-------------------\n";
    for (int i = 0; i < num_elm; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';
}