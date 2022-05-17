#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int Square(int n)
{
  return n * n;
}

int main()
{
    for(int i = 0; i < 101; i++)
    {
        cout << Square(i) << ' ';
    }
}