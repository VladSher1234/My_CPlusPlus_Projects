#include <iostream>
using namespace std;

int countOperations(int num1, int num2) {
    int step = 0;
    while((num1 != 0) && (num2 != 0))
        if(num1 > num2)
        {
            num1 -= num2;
            step++;
        }
        else
        {
            num2 -= num1;
            step++;
        }
    return step;
}
int main()
{
    cout << countOperations(2, 3);
}