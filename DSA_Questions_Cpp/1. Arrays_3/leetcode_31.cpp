#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fun1(vector<int> &v1)
{
    int pivot = -1;

    // 1. find pivot
    for (int i = v1.size() - 2; i >= 0; i--)
    {
        if (v1[i] < v1[i + 1])
        {
            pivot = i;
            break;
        }
    }

    // edge case
    if (pivot == -1)
    {
        reverse(v1.begin(), v1.end());
        return v1;
    }
    if (v1.size() == 1)
    {
        return v1;
    }

    // 2. find just greater that pivot
    int justG = -1;
    for (int i = pivot + 1; i < v1.size(); i++)
    {
        if (v1[pivot] < v1[i])
        {
            justG = i;
        }
    }

    // swap pivot and justG
    swap(v1[pivot], v1[justG]);

    // reverse pivot + 1 to end
    reverse(v1.begin() + pivot + 1, v1.end());

    return v1;
}

int main()
{
    vector<int> v1 = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    fun1(v1);
    for (int x : v1)
    {
        cout << x << " ";
    }
}