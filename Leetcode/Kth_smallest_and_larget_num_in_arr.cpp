#include <bits/stdc++.h>
using namespace std;

int partition_for_smallest(vector<int> &v, int si, int ei)
{
    int pvtele = v[(si + ei) / 2]; // take middle ele as pivot at start
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (v[i] <= pvtele)
            count++;
    }
    int pvtIdx = count + si;
    swap(v[(si + ei) / 2], v[pvtIdx]);

    int i = si;
    int j = ei;
    while (i < pvtIdx && j > pvtIdx)
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
    return pvtIdx;
}
int partition_for_largest(vector<int> &v, int si, int ei)
{
    int pvtele = v[(si + ei) / 2]; // take middle ele as pivot at start
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (i == (si + ei) / 2)
            continue;
        if (v[i] > pvtele)
            count++;
    }
    int pvtIdx = count + si;
    swap(v[(si + ei) / 2], v[pvtIdx]);

    int i = si;
    int j = ei;
    while (i < pvtIdx && j > pvtIdx)
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
    return pvtIdx;
}

int KthSmalest(vector<int> &v, int si, int ei, int k)
{
    int pvtIdx = partition_for_smallest(v, si, ei);
    if (pvtIdx + 1 == k)
        return v[pvtIdx];
    else if (pvtIdx + 1 < k)
        return KthSmalest(v, pvtIdx + 1, ei, k);
    else
        return KthSmalest(v, si, pvtIdx - 1, k);
}
int Kthlargest(vector<int> &v, int si, int ei, int k)
{
    int pvtIdx = partition_for_largest(v, si, ei);
    if (pvtIdx + 1 == k)
        return v[pvtIdx];
    else if (pvtIdx + 1 > k)
        return Kthlargest(v, pvtIdx + 1, ei, k);
    else
        return Kthlargest(v, si, pvtIdx - 1, k);
}

int main()
{
    int k = 6;
    int n = 6;
    vector<int> v1 = {3, 2, 1, 5, 6, 4};
    vector<int> v2 = {3, 2, 1, 5, 6, 4};

    cout << "Small: " << KthSmalest(v1, 0, n - 1, k) << endl;
    cout << "Large: " << Kthlargest(v2, 0, n - 1, k) << endl;

    return 0;
}