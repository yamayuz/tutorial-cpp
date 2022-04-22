#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    ++x = 5;    // xに1を足してから5を代入するので、xは5になる
    // x++ = 5; これはエラーになる
    cout << x << '\n';
}