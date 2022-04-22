// 読み込んだ個数だけ*を表示
// (ただし1行に最大10個まで表示)
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "何個表示しますか。:";
    cin >> n;

    if (n > 0) {
        int i = 1;
        while (i <= n) {
            cout << '*';
            if (i % 10 == 0) {
                cout << '\n';
            }
            i++;
        }
        cout << '\n';
    }
}