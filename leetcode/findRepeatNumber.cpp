#include<iostream>
#include "vector"

using namespace std;
class Solution
{
public:
    int findRepeatNumber(vector<int> &nums)
    {
        int i=0;
        while(i<nums.size())
        {
            if (nums[i]==i)
            {
                i++;
            }
            if (nums[i]==nums[nums[i]])
            {
                return nums[i];
            }
            swap(nums[i],nums[nums[i]]);
            
        }
        
    }
};