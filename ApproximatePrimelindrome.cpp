#include <iostream>
#include <cmath>
using namespace std;

int length(int n)
{
    int len = 0;
    while(n != 0)
    {
        n = n / 10;
        len += 1;
    }
    return len;
}
bool IsEven(int n)
{
    return (n % 2 == 0);
}
bool IsPalindrome(int x) 
{
    if(x == 0)
        return true;
    if((x < 0) || (x % 10 == 0))
        return false;
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
bool IsPrime(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i < round(sqrt(n)) + 1; i++)
    {
        if (n % i == 0)
            return false;
        if (i == round(sqrt(n)))
            return true;
    }
    return 0;
}
int primePalindrome(int n)
{
if ((n > 7) && (n < 12))
    return 11;
switch (length(n))
{
case 2:
    n = 100;
    break;
case 4:
    n = 10000;
    break;
case 6:
    n = 1000000;
    break;
case 8:
    n = 100000000;
    break;
default:
    break;
}
if ((IsPrime(n)) && (IsPalindrome(n)))
    return n;
else
{
    for(int i = n; i < pow(10, 9); i++)
        if ((IsPrime(i)) && (IsPalindrome(i)))
        {
            n = i;
            return i;
        }
        else
        {
        if(IsEven(length(i)))
        {
            switch (length(i))
            {
            case 2:
                if ((i > 7) && (i < 12))
                    return 11;
                i = 100;
                break;
            case 4:
                i = 10000;
                break;
            case 6:
                i = 1000000;
                break;
            case 8:
                i = 100000000;
                break;
            default:
                break;
            }
        }
        }
            
    }
return n;
}

int main()
{
    cout << primePalindrome(31880255);
}