#include <vector>
#include <iostream>

bool isThree(int n) {
    std::vector<int> arr;
    arr.push_back(n);
    for(int i = 1; i < n / 2 + 1; i++){
        if(n % i == 0)
            arr.push_back(i);
        if (arr.size() > 3)
            return false;
    }
    if (arr.size() != 3)
        return false;
    else
        return true;
}

int main()
{
    std::cout << isThree(4);
}
