#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

bool IsPrime(int n)
{
  for (int i = 2; i < round(sqrt(n)) + 1; i++)
  {
      if (n % i == 0)
      {
          return false;
          break;
      }
      if (i == round(sqrt(n)))
      {
          return true;
      }
  }
  return 0;
}

int main()
{
    int n;
    cout << "Write the number: ";
    cin >> n;
    if (IsPrime(n))
    {
        cout << "Number is prime" << '\n';
    }
    else
    {
        cout << "Number is composite" << '\n';
    }
}