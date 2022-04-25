// 列挙体の使い方
#include <iostream>

using namespace std;

int main()
{
    enum animal { Dog, Cat, Monkey = 5, Invalid };

    animal selected = static_cast<animal>('a');
    cout << "selected : " << selected << '\n';
    cout << "selected : " << typeid(selected).name() << '\n';

    cout << "Dog     : " << Dog << '\n';
    cout << "Cat     : " << Cat << '\n';
    cout << "Monkey  : " << Monkey << '\n';
    cout << "Invalid : " << Invalid << '\n';
}