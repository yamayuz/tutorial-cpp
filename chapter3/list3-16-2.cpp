// 二等辺三角形を表示
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "直角三角形の高さ:";
    cin >> n;

    for (int i = 1, k = 0; i <= n; i++, k++) {
        for (int j = n; j > i; j--) {
            cout << ' ';
        }

        for (int j = 1; j <= i + k; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}