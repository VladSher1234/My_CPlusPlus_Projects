#include <iostream>  

using namespace std; 

int main() 
{  
    int64_t n1 = 0, n2 = 1, n3 = 1, n4, number;    
    cout << "Enter the number of elements: ";    
    cin >> number;    
    cout << n1 << ' ' << n2 << ' ' << n3 << ' ';
    for(int64_t i = 3; i < number; i++) 
    {    
        n4 = n1 + n2 + n3;    
        cout << n4 << ' ';    
        n1 = n2;    
        n2 = n3; 
        n3 = n4;   
    }    
}  