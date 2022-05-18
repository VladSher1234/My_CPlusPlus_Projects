#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    do 
    {
        i++;
        cout << i << ' ';
    }   while(i < 50);
    i = 0;
    cout << '\n' << "do while" << '\n';
    while(i < 50){
        i++;
        cout << i << ' '; 
    }
    cout << '\n' << "while" << '\n';
    for(i = 1; i < 51; i++){
        cout << i << ' '; 
    }
    cout << '\n' << "for" << '\n';
}