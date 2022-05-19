#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n > 50)
    {
        cout << "Number bigger than 50" << '\n';
    }
    else
    {
        cout << "Number smaller than 50" << '\n';
    }
}