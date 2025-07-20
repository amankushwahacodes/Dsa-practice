#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rotateArr(vector<int> &arr)
    {
        reverse(arr.begin(), arr.end() - 1);
        reverse(arr.begin(), arr.end());
        return 1;
    }
    bool check(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> sortedArr(size);
        sortedArr = nums;
        sort(sortedArr.begin(), sortedArr.end());

        for (int i = 0; i < size; i++)
        {
            rotateArr(nums);
            if (nums == sortedArr)
                return true;
        }

        return false;
    }
};