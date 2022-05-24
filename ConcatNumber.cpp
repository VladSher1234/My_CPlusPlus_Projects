#include <iostream>
using namespace std;

int length(int n)
{
    int len = 0;
    while(n != 0)
    {
        n = n / 10;
        len += 1;
    }
    return len;
}

int64_t powerOfTen(int x)
{
    int64_t a = 1;
    for(int i = 1; i < x + 1; i++)
        a *= 10;
    return a;
}

int64_t concat(int64_t x, int64_t y)
{
    return (x * powerOfTen(length(y))) + y;
}

int main()
{
    int64_t x, y;
    cout << "Enter the two numbers: ";
    cin >> x;
    cin >> y;
    cout << "Concat: " << concat(x, y);
}