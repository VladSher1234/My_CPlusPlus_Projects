#include <iostream>
#include <numeric>

using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int arr[6] = {42,562,649,143,98,31};
    print_array(arr, 6);
}