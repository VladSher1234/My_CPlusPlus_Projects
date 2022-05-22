#include <iostream>
using namespace std;

double MilesToKilometers(double mile)
{
    return mile * 1.60934;
}

int main()
{
    double m = 0;
    cout << "Enter the number of miles: ";
    cin >> m;
    cout << "Miles to kilometrs: " << MilesToKilometers(m);
}