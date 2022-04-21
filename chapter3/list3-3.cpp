#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x;

    do {
        cout << "1～10の整数を入力してください：";
        cin >> x;

        if (cin.fail()) {
            cout << "整数を入力してください！\n";
            cin.clear();
            cin.ignore(1024, '\n');
        }
    } while (x < 1 || x > 10);

    cout << "入力値は" << x << "です。\n";
}