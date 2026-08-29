#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to maximize sum after K negations
int largestSumAfterKNegations(vector<int> &nums, int k)
{
    // Write your solution here
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end()); // O(n)

    int sum = 0;
    for (int i = 0; i < nums.size(); i++) // O(n)
        sum += nums[i];
    while (k--) // O(klogn)
    {
        int el = pq.top();
        if (el == 0)
        {
            break;
        }
        pq.pop();
        sum -= el;
        pq.push(-1 * el);
        sum += (-el);
    }
    return sum;
}

int main()
{
    // Testcase 1
    vector<int> nums1 = {4, 2, 3};
    int k1 = 1;
    cout << "Testcase 1 Output: " << largestSumAfterKNegations(nums1, k1) << endl;

    // Testcase 2
    vector<int> nums2 = {3, -1, 0, 2};
    int k2 = 3;
    cout << "Testcase 2 Output: " << largestSumAfterKNegations(nums2, k2) << endl;

    // Testcase 3
    vector<int> nums3 = {2, -3, -1, 5, -4};
    int k3 = 2;
    cout << "Testcase 3 Output: " << largestSumAfterKNegations(nums3, k3) << endl;

    // Add more testcases as needed

    return 0;
}