#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int noOfOnes = 0;
        int maxOnes = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                noOfOnes++;
                maxOnes = max(noOfOnes, maxOnes);
            }

            else
            {
                noOfOnes = 0;
            }
        }
        return maxOnes;
    }
};