#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int si, int ei)
{
    int pvtele = v[(si + ei) / 2];
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (v[i] <= pvtele)
            count++;
    }
    int pvtidx = count + si;
    swap(v[(si + ei) / 2], v[pvtidx]);
    int i = si;
    int j = ei;
    while (i < pvtidx && j > pvtidx)
    {
        if (v[i] <= pvtele)
            i++;
        if (v[j] > pvtele)
            j--;
        else if (v[i] > pvtele && v[j] <= pvtele)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return pvtidx;
}

int KthSmalest(vector<int> &v, int si, int ei, int k)
{
    int pivotIdx = partition(v, si, ei);
    if (pivotIdx + 1 == k)
        return v[pivotIdx];
    else if (pivotIdx + 1 < k)
        return KthSmalest(v, pivotIdx + 1, ei, k);
    else
        return KthSmalest(v, si, pivotIdx - 1, k);
}

int main()
{
    vector<int> v = {5, 1, 8, 0, 7, 6, 3, 4};
    int n = v.size();
    int k = 3;
    cout << KthSmalest(v, 0, n - 1, k);
    return 0;
}