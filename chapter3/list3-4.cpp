#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "カウントダウンします。\n";
    do {
        cout << "正の整数値:";
        cin >> x;

        if (cin.fail()) {
            cout << "整数を入力してください！\n";
            cin.clear();
            cin.ignore(1024, '\n');
        }
    } while (x <= 0);

    while (x >= 0) {
        cout << x << "\n";
        x--;
    }
}