#include <iostream>
using namespace std;

double nthPersonGetsNthSeat(int n) {
    double d = n;
    return 1 / d;
}
int main()
{
    cout << nthPersonGetsNthSeat(2);
}