#include <iostream>
using namespace std;

bool IsEven(int n)
{
    return (n % 2 == 0);
}

bool Collatz(int n)
{
    int i = n;
    while(i > 1)
    {
        if (IsEven(i))
            i = i / 2;
        else
            i = i * 3 + 1;
    }
    if (i == 1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (Collatz(n))
        cout << "Number is 1";
    else
        cout << "Number is not 1";
}