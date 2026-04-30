#include <bits/stdc++.h>
using namespace std;

vector<int> findKClosest(vector<int> &arr, int k, int x)
{
    // Your solution here
    int n = arr.size();
    vector<int> result;
    priority_queue<pair<int, int>> maxHeap;

    for (int i = 0; i < n; i++)
    {
        int distance = abs(arr[i] - x);
        maxHeap.push({distance, arr[i]});
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    while (maxHeap.size() > 0)
    {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
}

int main()
{
    // Test case 1
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int k1 = 4, x1 = 3;
    vector<int> res1 = findKClosest(arr1, k1, x1);
    cout << "Test case 1: ";
    for (int num : res1)
        cout << num << " ";
    cout << endl;

    // Test case 2
    vector<int> arr2 = {1, 2, 3, 4, 5};
    int k2 = 4, x2 = -1;
    vector<int> res2 = findKClosest(arr2, k2, x2);
    cout << "Test case 2: ";
    for (int num : res2)
        cout << num << " ";
    cout << endl;

    // Test case 3
    vector<int> arr3 = {1, 1, 1, 10, 10, 10};
    int k3 = 1, x3 = 9;
    vector<int> res3 = findKClosest(arr3, k3, x3);
    cout << "Test case 3: ";
    for (int num : res3)
        cout << num << " ";
    cout << endl;

    return 0;
}