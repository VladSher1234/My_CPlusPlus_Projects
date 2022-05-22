#include <iostream>
#include <cmath>

using namespace std;

bool IsEven(int n)
{
    return (n % 2 == 0);
}

bool IsOdd(int n)
{
    return (n % 2 == 1);
}

bool IsPrime(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i < round(sqrt(n)) + 1; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
        if (i == round(sqrt(n)))
            return true;
    }
    return 0;
}
int64_t factorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        result *= i;
    return result;
}
int64_t superfactorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        result *= factorial(i);
    return result;
}
int64_t primorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        if (IsPrime(i))
            result *= i;
    return result;
}
int64_t compositorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        if (not IsPrime(i))
            result *= i;        
    return result;
}
int64_t oddorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        if (IsOdd(i))
            result *= i;
    return result;
}
int64_t evenorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
        if (IsEven(i))
            result *= i;
    return result;
}

int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;
   cout << "Factorial: " << factorial(n) << '\n';
   cout << "Superfactorial: " << superfactorial(n) << '\n';
   cout << "Primorial: " << primorial(n) << '\n';
   cout << "Compositorial: " << compositorial(n) << '\n';
   cout << "Evenorial: " << evenorial(n) << '\n';
   cout << "Oddorial: " << oddorial(n) << '\n';
}