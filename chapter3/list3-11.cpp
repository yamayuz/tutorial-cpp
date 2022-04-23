// 読み込んだ個数だけ*を表示（for文、1行最大10個まで）
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "何個の*を表示しますか:";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            cout << '*';
            if (i % 10 == 0) cout << '\n';
        }
        cout << '\n';
    }
}