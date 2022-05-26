#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n) {
    for(int i = 0; i < 32; i++){
        if (pow(2, i) == n)
            return true;
        if (i == 31)
            return false;
    }
    return 2;
}
bool isPowerOfThree(int n) {
    for(int i = 0; i < 21; i++){
        if (pow(3, i) == n)
            return true;
        if (i == 20)
            return false;
    }
    return 2;
}
bool isPowerOfFour(int n) {
    for(int i = 0; i < 17; i++){
        if (pow(4, i) == n)
            return true;
        if (i == 16)
            return false;
    }
    return 2;
}


int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    cout << isPowerOfTwo(n) << ' ' << isPowerOfThree(n) << ' ' << isPowerOfFour(n) << ' ';
}