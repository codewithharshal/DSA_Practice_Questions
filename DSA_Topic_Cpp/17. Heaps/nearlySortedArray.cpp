#include <bits/stdc++.h>
using namespace std;

// Function to sort a nearly sorted array where each element is at most
// k positions away from its target position.
vector<int> sortNearlySortedArray(const vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> result;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; i++)
    {
        minHeap.push(arr[i]);
        if (minHeap.size() > k)
        {
            result.push_back(minHeap.top());
            minHeap.pop();
        }
    }
    while (minHeap.size() != 0)
    {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    return result;
}

int main()
{
    // Example test case
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    vector<int> sortedArr = sortNearlySortedArray(arr, k);

    cout << "Original array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";

    cout << "Sorted array: ";
    for (int x : sortedArr)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}