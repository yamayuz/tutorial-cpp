// 入力した整数以下の偶数を表示する
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "整数を入力してください:";
    cin >> n;

    if (n > 0) {
        for (int i = 0; i <= n; i += 2)
            cout << i << ' ';
        cout << '\n';
    }
}