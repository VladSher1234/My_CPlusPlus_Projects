#include <iostream>

using namespace std;

int ReverseNumber(int n)
{
    int reversed_number = 0, remainder;
    while(n != 0) 
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

bool IsPalindrome(int n)
{
    return (ReverseNumber(n) == n);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (IsPalindrome(n))
        cout << "Number is palindrome" << '\n';
    else
        cout << "Number is not palindrome" << '\n';
}