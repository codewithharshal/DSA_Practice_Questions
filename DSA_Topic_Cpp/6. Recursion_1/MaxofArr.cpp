#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void MaxRec(vector<int> arr, int n, int i, int max)
{
    if (i == n)
    {
        cout << max;
        return;
    }
    if (max < arr[i])
        max = arr[i];
    MaxRec(arr, n, i + 1, max);
}

int main()
{
    vector<int> arr = {1, 4, 5, 6, 4, 3};
    int n = arr.size();
    MaxRec(arr, n, 0, INT_MIN);
    return 0;
}