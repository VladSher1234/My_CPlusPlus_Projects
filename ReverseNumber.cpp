#include <iostream>
using namespace std;

int ReverseNumber(int x) 
{
    int64_t reversed_number = 0, remainder;
    while(x != 0) 
    {
        remainder = x % 10;
        reversed_number = reversed_number * 10 + remainder;
        x /= 10;
    }
    return reversed_number;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Reverse number: " << ReverseNumber(121);
}