#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        // handling i duplicates
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;
                // Handling j duplicates
                while (nums[j] == nums[j - 1] && j < k)
                {
                    j++;
                }
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 0, 2, -1, -1, -4};
    return 0;
}