#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[] = { 4, 2, 1, 6, -8, 5 };
    int min = 0, max = 0;
    for (int i: arr)
    {
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }
    cout << "The min element is " << min << '\n';
    cout << "The max element is " << max << '\n';
}
