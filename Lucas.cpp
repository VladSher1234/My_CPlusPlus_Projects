#include <iostream>  

using namespace std; 

int main() {  
    int64_t n1 = 2, n2 = 1, n3, number;    
    cout << "Enter the number of elements: ";    
    cin >> number;    
    cout << n1 << ' ' << n2 << ' ';
    for(int64_t i = 2; i < number; i++) 
    {    
        n3 = n1 + n2;    
        cout << n3 << ' ';    
        n1 = n2;    
        n2 = n3;    
    }    
}  