//Given an array of integers nums, return the number of good pairs.
//A pair (i, j) is called good if nums[i] == nums[j] and i < j.
#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++)
        for(int j = 0; j < nums.size(); j++)
            if((nums[i] == nums[j]) && (i < j))
                count++;
    return count;
}

int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(3);
    cout << numIdenticalPairs(vec);
}