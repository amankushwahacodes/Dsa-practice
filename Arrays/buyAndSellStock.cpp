#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int mini = INT_MAX;

        for (int price : prices)
        {
            if (price < mini)
            {
                mini = price;
            }
            if (maxProfit < (price - mini))
            {
                maxProfit = price - mini;
            }
        }
        return maxProfit;
    }
};