#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int n = v.size();
    int target = 6;
    if (v[0] == target)
    {
        cout << v[0];
    }

    // Step 1: Exponential range finding
    int index = 1;
    while (index < n && v[index] < target)
    {
        index *= 2;
    }

    // Step 2: Binary search
    int low = index / 2;
    int high = index;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == target)
        {
            cout << "Found at index: " << mid << endl;
            return 0;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Not found" << endl;
    return 0;
}