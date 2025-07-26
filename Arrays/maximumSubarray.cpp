#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int sum = 0;
        int stIndex ;
        int endIndex;
        for (int i = 0; i < nums.size(); i++)
        {
            if(!sum) stIndex = i;
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
                endIndex = i;

            }
            maxi = max(maxi, sum);
            if (sum < 0){
                sum = 0;
                
            }
        }
        return maxi;
    }
};