#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i < j)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int j = 0, k = m - 1;
            while (j <= k)
            {
                int temp = matrix[i][j];
                matrix[i][j++] = matrix[i][k];
                matrix[i][k--] = temp;
            }
        }
    }
};