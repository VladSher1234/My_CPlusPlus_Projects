#include <iostream>

using namespace std;

bool IsEven(int n)
{
    return (n % 2 == 0);
}

bool IsOdd(int n)
{
    return (n % 2 == 1);
}

int main()
{
    int n;
    cout << "Write the number: ";
    cin >> n;
    if (IsEven(n))
    {
        cout << "Number is even" << '\n';
    }
    else
    {
        cout << "Number is odd" << '\n';
    }
}