#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool bs_on_rotated_arr(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return true;

        // Case 1: left half is strictly sorted
        if (nums[low] < nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Case 2: right half is strictly sorted
        else if (nums[low] > nums[mid])
        {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        // Case 3: duplicates block decision
        else
        {
            low++; // safe shrink
        }
    }
    return false;
}

int main()
{
    vector<int> v = {
        4, 5, 6, 6, 9, 9, 1, 2, 3};
    int target = 40;
    cout << bs_on_rotated_arr(v, target);

    return 0;
}