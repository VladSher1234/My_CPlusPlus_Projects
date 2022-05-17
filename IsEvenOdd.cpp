#include <iostream>

using namespace std;

bool IsEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool IsOdd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (IsEven(n))
    {
        cout << "Число четно" << '\n';
    }
    else
    {
        cout << "Число нечетно" << '\n';
    }
}