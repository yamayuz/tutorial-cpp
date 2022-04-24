// 読み込んだ文字のコードを10進数で表示

#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "文字を入力:";
    cin >> c;
    cout << "文字'" << c << "'の文字コードは" << int(c) << "です。\n";
}