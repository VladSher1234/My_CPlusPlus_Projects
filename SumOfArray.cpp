#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {74,23,68,25,98,14};
    int sum = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
        sum += arr[i];
    cout << sum;
}