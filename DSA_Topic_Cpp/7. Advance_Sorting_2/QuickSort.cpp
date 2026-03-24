#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int lb = low;
    int hb = high;

    int i = low + 1;
    int pvt = v[low];

    while (i <= hb)
    {
        if (v[i] < pvt)
        {
            swap(v[i], v[lb]);
            i++;
            lb++;
        }
        else if (v[i] > pvt)
        {
            swap(v[i], v[hb]);
            hb--;
        }
        else
        {
            i++;
        }
    }

    QuickSort(v, 0, lb - 1);
    QuickSort(v, lb + 1, hb);
}

int main()
{
    vector<int> v = {5, 1, 8, 2, 7, 6, 3, 4};
    QuickSort(v, 0, v.size() - 1);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}