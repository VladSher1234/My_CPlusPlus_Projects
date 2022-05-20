#include <iostream>

using namespace std;

float ariphmmean(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    float a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Ariphmetic mean: " << ariphmmean(a, b) << '\n';
}