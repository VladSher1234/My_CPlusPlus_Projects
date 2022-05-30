#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 1000; i++)
        if((i % 7) + (i % 8) + (i % 9) == 21)
            cout << i;
}