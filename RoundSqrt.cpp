#include <iostream>
using namespace std;

int sqrt(int x)
{
    if(x == 0)
            return 0;
        if(x == 1)
            return 1;
        const int temp_x = x;
        int64_t i = 1;
        for(i = 1; i < temp_x; i++)
        {
            x -= i * i;
            if(x < 0)
                return i - 1;
            else 
            {
                x = temp_x;
                continue;
            }
        }
        return i - 1;
}

int main()
{
    cout << sqrt(2);
}