#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool NumIsNotHaveAZero(int n)
{
    string s = to_string(n);
    for(int i = 0; i < s.length() + 1; i++){
        if(s[i] == '0')
            return false;
        if(i == s.length())
            return true;
    }   
    return 2;
}
vector<int> getNoZeroIntegers(int n) {
    vector<int> arr;
    for(int i = 1; i < n; i++)
    {
        if ((NumIsNotHaveAZero(n - i)) && (NumIsNotHaveAZero(i)))
        {
            arr.push_back(n - i);
            arr.push_back(i);
            return arr;
        }
    }
    return arr;
}
int main()
{
    vector<int> vec = getNoZeroIntegers(1234);
    for(int i = 0; i < 2; i++)
        cout << vec[i] << ' ';
}