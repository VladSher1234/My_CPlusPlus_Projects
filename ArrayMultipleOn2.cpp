#include <iostream>
#include <random>
using namespace std;

int random(int min, int max)
{
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

int main()
{
    int arr[6] = {random(1, 49), random(1, 49), random(1, 49), random(1, 49), random(1, 49), random(1, 49)};
    cout << "Original array:        ";
    for (int i = 0; i < sizeof(arr) / 4; i++)
        cout << arr[i] << ' ';
    for (int i = 0; i < sizeof(arr) / 4; i++)
        arr[i] *= 2;
    cout << endl << "Array multiple on two: ";
    for (int i = 0; i < sizeof(arr) / 4; i++)
        cout << arr[i] << ' ';
}