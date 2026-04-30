#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> &arr, int k)
{
    // Your solution here
    // Builtin sort T(nlogn) S(nlogn), find To(1)
    // Selection sort TO(k*n) SO(1)
    // quick select algo TO(n) [not in worst case]
    // using heaps O(nlogk)

    priority_queue<int> maxHeap;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > k)
            maxHeap.pop();
    }
    return maxHeap.top();
}

int main()
{
    // Test case 1
    vector<int> arr1 = {7, 10, 4, 3, 20, 15};
    int k1 = 3;
    cout << findKthSmallest(arr1, k1) << endl; // Expected: 7

    // Test case 2
    vector<int> arr2 = {1, 2, 3, 4, 5};
    int k2 = 1;
    cout << findKthSmallest(arr2, k2) << endl; // Expected: 1

    // Test case 3
    vector<int> arr3 = {12, 3, 5, 7, 19};
    int k3 = 2;
    cout << findKthSmallest(arr3, k3) << endl; // Expected: 5

    return 0;
}