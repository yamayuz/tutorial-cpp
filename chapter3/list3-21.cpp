#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "面積:";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (i * i > n) break;
        if (n % i != 0) continue;
        cout << i << "×" << n / i << '\n';
    }
}