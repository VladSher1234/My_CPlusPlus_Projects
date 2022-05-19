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

void my_iota(int arr[], int size, int default_value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = default_value;
        default_value++;
    }
}

int main()
{
    int arr[3];
    print_array(arr, 10);
    iota(begin(arr), end(arr), 0);
    print_array(arr, 10);
}
