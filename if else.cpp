#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n > 50)
    {
        cout << "Число больше 50" << '\n';
    }
    else
    {
        cout << "Число меньше 50" << '\n';
    }
}