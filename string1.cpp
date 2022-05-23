#include <string>
#include <iostream>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    string str = string(10000, 'a') + string(1500000, 'b');
    // cout << "Enter the string: ";
    // getline(cin, str);
    reverseStr(str);
    const int len = str.length();
    for(int i = 0; i < len; i++)
        if((str[i] == 'a') or (str[i] == 'A'))
        {
            str.erase(i, 1);
            i = -1;
        }
    cout << str;
}