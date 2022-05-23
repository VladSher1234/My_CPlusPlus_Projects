#include <iostream>
using namespace std;

int main()
{
    int64_t n = 0;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number divisors: ";
    for(int64_t i = 1; i < n / 2 + 1; i++)
        if (n % i == 0)
            cout << i << ' ';
}