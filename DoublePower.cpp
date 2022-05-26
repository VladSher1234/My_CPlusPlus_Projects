#include <iostream>
using namespace std;

double DoublePower(double x, int n)
{
    if(x == -1)
        return -1.00000;
    if (n <= INT32_MIN)
        return 0;
    if (n > 0)
    {
        double a = 1;
        for(int i = 0; i < n; i++)
            a *= x;
        return a;
    }
    else
    {
        double a = 1;
        for(int i = 0; i > n; i--)
            a *= x;
        return 1 / a;
}
}

int main()
{
    cout << DoublePower(2.0, -2);
}