#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 0, 2, 1, 1, 0};
    // Dutch Flag Algo
    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else if (v[mid] == 2)
        {
            swap(v[mid], v[high]);
            high--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}