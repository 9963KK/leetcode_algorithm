#include <iostream>
#include "vector"
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int low=0;
        int high=nums.size()-1;
        int mid=(low+high)/2;
        while (low<=high)
        {
            if (nums.empty())
            {
                return -1;
            }
            if (mid == nums[mid] - 1)
            {
                return mid;
            }
            if (nums[mid]!=mid)
            {  
                {
                    high=mid-1;
                    mid=(low+high)/2;
            
                }
            }else {
                low=mid+1;
                mid=(low+high)/2;
            }
        return -1;
    }
}
};