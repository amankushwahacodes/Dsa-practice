#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(vector<int> &nums, int ele1, int ele2)
    {
        int temp = nums[ele1];
        nums[ele1] = nums[ele2];
        nums[ele2] = temp;
        return;
    }
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 2)
            {
                swap(nums, mid, high);
                high--;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums, mid, low);
                low++;
                mid++;
            }
        }
    }
};
