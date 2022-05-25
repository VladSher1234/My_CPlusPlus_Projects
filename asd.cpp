#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
        for (int i1 = 0; i1 < nums.size(); i1++)
            if (nums[i] + nums[i1] == target)
            {
                arr.push_back(i);
                arr.push_back(i1);
                return arr;
            }
        return arr;
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(15);
    vector<int> t = twoSum(arr, 9);
    for(int i = 0; i < t.size(); i++)
        cout << t[i] << ' ';
}