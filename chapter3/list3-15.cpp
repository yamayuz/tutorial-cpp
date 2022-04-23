// 左下側が直角の二等辺三角形を表示
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "直角三角形の高さ:";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}