#include <iostream>
#include <string>
using namespace std;

int RomanToInt(string roman)
{
    int a = 0;
    char last, current;
    for (int i = 1; i < roman.length(); i++)
    {
        last = roman[i - 1];
        current = roman[i];
        if ((last == 'I' && current == 'V'))
        {
            roman.erase(i - 1, 2);
            a += 4;
            i = 0;
        }
        if ((last == 'I' && current == 'X' ))
        {
            roman.erase(i - 1, 2);
            a += 9;
            i = 0;
        }
        if ((last == 'X' && current == 'L' ))
        {
            roman.erase(i - 1, 2);
            a += 40;
            i = 0;
        }
        if ((last == 'X' && current == 'C' ))
        {
            roman.erase(i - 1, 2);
            a += 90;
            i = 0;
        }
        if ((last == 'C' && current == 'D' ))
        {
            roman.erase(i - 1, 2);
            a += 400;
            i = 0;
        }
        if ((last == 'C' && current == 'M' ))
        {
            roman.erase(i - 1, 2);
            a += 900;
            i = 0;
        }
    }
    for(int i1 = 0; i1 < roman.length(); i1++)
        switch (roman[i1])
        {
            case 'I':
                a += 1;
                break;
            case 'V':
                a += 5;
                break;
            case 'X':
                a += 10;
                break;
            case 'L':
                a += 50;
                break;
            case 'C':
                a += 100;
                break;
            case 'D':
                a += 500;
                break;
            case 'M':
                a += 1000;
                break;
            default:
                break;
        }
        return a;
}

int main()
{
    cout << RomanToInt("CXXIII");
}