#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int arr[6] = {74,23,68,25,98,12};
    int a = 0;
    for(int i = 0; i < 6; i++)
    {
        a += arr[i];
    }
    cout << a;
}