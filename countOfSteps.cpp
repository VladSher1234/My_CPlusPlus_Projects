#include <iostream>
using namespace std;

int numberOfSteps(int num) {
    int steps = 0;
    while (num != 0)
    {
        if(num % 2 == 0)
        {
            num = num / 2;
            steps += 1;
        }
        else
        {
            num -= 1;
            steps += 1;
        }
    }
    return steps;
}
int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number of steps for the number to become zero: " << numberOfSteps(n);
}