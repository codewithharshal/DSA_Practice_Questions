#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 9, 15, 18, 21, 24};
    int low = 0;
    int high = v.size() - 1;
    int target = 18;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == target)
        {
            cout << "Found at idx " << mid;
            break;
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

    return 0;
}