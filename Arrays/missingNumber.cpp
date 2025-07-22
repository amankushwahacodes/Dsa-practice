#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        for (auto it : nums)
        {
            sum += it;
        }
        int sizeArr = nums.size() + 1;
        int sumArr = (sizeArr * (sizeArr - 1)) / 2;
        return sumArr - sum;
    }
};