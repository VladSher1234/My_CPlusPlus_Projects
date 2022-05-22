#include <iostream>

using namespace std;

int Cube(int n)
{
  return n * n * n;
}

int main()
{
    for(int i = 0; i < 101; i++)
    cout << Cube(i) << ' ';
}