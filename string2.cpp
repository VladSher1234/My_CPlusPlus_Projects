#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned int foo(int a)
{
    return a;
}

int main()
{
    // string str = string(10000, 'a') + string(1500000, 'b');
    // erase_if(str, [](char el) { return el == 'a' or el == 'A'; });
    // ranges::reverse_copy(str, ostream_iterator<char>{cout, ""});
    std::cout << foo(-1) << '\n'; 
}