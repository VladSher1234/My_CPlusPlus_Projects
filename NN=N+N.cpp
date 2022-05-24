#include <iostream>
using namespace std;

int main()
{
    for(double i = 1; i < 100; i += 0.0625)
        for(double i1 = 1; i1 < 100; i1 += 0.0625)
            if((i * i1) == (i + i1))
                cout << i << '+' << i1 << '=' << i << '*' << i1 << '=' << i + i1 << endl;
}