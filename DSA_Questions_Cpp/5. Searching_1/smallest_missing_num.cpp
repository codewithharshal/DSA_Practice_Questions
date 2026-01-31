#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 2, 4, 5, 8, 10, 12};
    int n = v.size();

    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (v[mid] == mid)
        {
            low = mid + 1;
        }
        else if (v[mid] < mid)
        {
            low = mid + 1;
        }
        else if (v[mid] > mid)
        {
            high = mid - 1;
        }
    }
    cout << mid + 1;

    return 0;
}