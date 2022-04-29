// 配列をコピーする
#include <iostream>

using namespace std;

int main()
{
    const int num_elm = 5;
    int a[] = {34, 98, 31, 45, 1};
    int b[num_elm];

    // コピー対象の配列を表示
    for (int i = 0; i < num_elm; i++)
        cout << "a[" << i << "] = " << a[i] << '\n';
    
    // 配列をコピー
    for (int i = 0; i < num_elm; i++)
        b[i] = a[i];

    // コピーした配列を表示
    cout << "-----------\n";
    for (int i = 0; i < num_elm; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';
    
}