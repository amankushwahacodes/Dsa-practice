#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int noOfOnes = 1;
        int maxOnes = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] && nums[i])
            {
                noOfOnes++;
                maxOnes = max(noOfOnes, maxOnes);
            }
            else
                noOfOnes = 1;
        }
        return maxOnes;
    }
};