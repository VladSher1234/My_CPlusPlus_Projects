#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 11; i++)
    {
        for (int i1 = 1; i1 < 11; i1++)
            cout << i*i1 << ' ';
        cout << '\n';
    }
}
