#include <iostream>

using namespace std;

bool IsPalindrome(int x) 
    {
        if(x == 0)
        {
            return true;
        }
        if((x < 0) || (x % 10 == 0))
        {
            return false;
        }
        int64_t reversed_number = 0, remainder;
        const int x_temp = x;
        while(x != 0) 
        {
            remainder = x % 10;
            reversed_number = reversed_number * 10 + remainder;
            x /= 10;
        }
        if(reversed_number == x_temp)
            return true;
        else
            return false;
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