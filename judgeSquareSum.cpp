#include <iostream>
#include <cmath>
using namespace std;

bool judgeSquareSum(int c) {
    for(int a = 0; a < round(sqrt(c)) + 1; a++)
        for(int b = 0; b < round(sqrt(c)) + 1; b++)
            if ((pow(a, 2) + pow(b, 2)) == c)
                return true;
    return false;
}

int main()
{
    cout << judgeSquareSum(5);
}