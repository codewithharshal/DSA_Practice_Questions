#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool bs_in_2d_mat_optimal(vector<vector<int>> v, int target)
{
    int row = v.size();
    int col = v[0].size();

    int low = 0;
    int high = row * col - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int m_row = mid / col;
        int m_col = mid % col;

        if (v[m_row][m_col] == target)
        {
            return true;
        }
        else if (v[m_row][m_col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

bool bs_in_2d_mat(vector<vector<int>> v, int target)
{
    int col = v[0].size();
    int row = v.size();

    for (int i = 0; i < row; i++)
    {
        int low = 0;
        int high = col - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (v[i][mid] == target)
            {
                return true;
            }
            else if (v[i][mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{2, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 7;
    cout << bs_in_2d_mat_optimal(v, target);
    // cout << bs_in_2d_mat(v, target);
    return 0;
}