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