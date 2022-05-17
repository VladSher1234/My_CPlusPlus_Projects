#include <iostream>

using namespace std;

int64_t Factorial(int n)
{
    int64_t result = 1;
    for (int64_t i = 1; i < n + 1; i++)
    {
        result *= i;
    } 
    return result;
}

int main()
{
   int n;
   cout << "Введите число: ";
   cin >> n;
   cout << Factorial(n) << '\n';
}