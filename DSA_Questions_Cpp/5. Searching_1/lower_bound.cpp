#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 9, 15, 18, 21, 24};
    int low = v[0];
    int high = v[v.size() - 1];
    int target = 15;
    bool flag = false;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == target)
        {
            flag = true;
            cout << "Lower bound " << v[mid - 1] << endl;
            cout << "Higher bound " << v[mid + 1] << endl;
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

    if (!flag)
    {
        cout << "Lower bound " << v[high] << endl;
        cout << "Higher bound " << v[low] << endl;
    }

    return 0;
}