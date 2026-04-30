#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    // Write your solution here
    vector<int> result;
    int n = nums.size();

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    for (auto x : freq)
    {
        int f = x.first;
        int s = x.second;
        minHeap.push({s, f});
        // In this minHeap only contain K element
        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    while (minHeap.size() > 0)
    {
        int ele = minHeap.top().second;
        result.push_back(ele);
        minHeap.pop();
    }

    return result;
}

int main()
{
    // Test case 1
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    vector<int> result1 = topKFrequent(nums1, k1);
    cout << "Test case 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> nums2 = {1};
    int k2 = 1;
    vector<int> result2 = topKFrequent(nums2, k2);
    cout << "Test case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}