#include <iostream>
#include <cmath>

using namespace std;

/// Returns the dth root of x
double root(int d, double x)
{
    if (d == 0)
    {
        cerr<<"Zero root can't be calculated";
        exit(1);
    }
    if (x > 0)
    {
        return exp(log(x) / d);
    }
    else
    {
        return -exp(log(-x) / d);
    }
        
}

int main()
{
    int d;
    double x;
    cout << "Enter the degree of root: ";
    cin >> d;
    cout << "Enter the x: ";
    cin >> x;
    cout << d << "th root of " << x << " = " << root(d, x);
}

