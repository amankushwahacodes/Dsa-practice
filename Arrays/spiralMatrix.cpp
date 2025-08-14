#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int maxr = matrix.size() - 1;
        int maxc = matrix[0].size() - 1;
        int total = (maxr + 1) * (maxc + 1);
        int minr = 0;
        int minc = 0;
        int count = 0;
        vector<int> res;

        while (minr <= maxr && minc <= maxc)
        {
            for (int i = minc; i <= maxc && count < total; i++)
            {
                res.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for (int i = minr; i <= maxr && count < total; i++)
            {
                res.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for (int i = maxc; i >= minc && count < total; i--)
            {
                res.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for (int i = maxr; i >= minr && count < total; i--)
            {
                res.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return res;
    }
};