#include <iostream>
#include "vector"
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (low + high) / 2;
        if (nums[low] == low && nums[high] == high)
        {
            return high + 1;
        }
        while (low <= high)
        {
            if (nums.empty())
            {
                return 0;
            }

            if (nums[mid] != mid)
            {

                high = mid - 1;
                mid = (low + high) / 2;
                if (high < 0)
                    mid = mid - 1;
            }
            else
            {
                low = mid + 1;
                mid = (low + high) / 2;
            }
            //   if (mid == nums[mid]-1)
            // {
            //     return mid;
            // }
        }
        return mid + 1;
    }
};