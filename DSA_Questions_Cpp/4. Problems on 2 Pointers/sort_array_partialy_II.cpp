#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int> &nums)
{
    int n = nums.size();
    int i = 0; // even
    int j = 1; // odd
    while (i < n && j < n)
    {
        // even
        while (i < n && nums[i] % 2 == 0)
            i += 2;
        // odd
        while (j < n && nums[j] % 2 != 0)
            j += 2;

        // for odd even // even odd
        if (i < n && j < n)
        {
            swap(nums[i], nums[j]);
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {2, 7, 6, 3, 1, 4, 5, 8};
    sortArrayByParityII(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }
    return 0;
}