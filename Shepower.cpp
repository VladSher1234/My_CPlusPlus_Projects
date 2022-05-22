// Shepower(n) = n ^ n

#include <iostream>
#include <cmath>

using namespace std;

int64_t Shepower(int n)
{
    return pow(n, n);
}

int main()
{
    for (int i = 0; i < 11; i++)
        cout << Shepower(i) << ' ';
}