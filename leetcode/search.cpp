#include<iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int low = 0;
        int high = nums.size() - 1;
        int mid = (high + low) / 2;
        if (nums.empty())
        {
            return 0;
        }
        if (nums[low] > target || nums[high] < target)
        {
            return 0;
        }
        while (low <= high)
        {
            if (nums[mid] == target)
            {
                low = high = mid;
                while (nums[low] == target)
                {
                    low--;
                    if (low < 0)
                        break;
                }
                while (nums[high] == target)
                {
                    high++;
                    if (high >= nums.size())
                        break;
                }
                return high - low - 1;
            }
            if (nums[mid] < target)
            {
                low = mid + 1;
                mid = (high + low) / 2;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
                mid = (high + low) / 2;
            }
        }
        return 0;
    }
};