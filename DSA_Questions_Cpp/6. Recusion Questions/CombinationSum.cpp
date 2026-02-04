#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combination(vector<int> &v, int arr[], int n, int target, int idx, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(v);
        return;
    }
    for (int i = idx; i < n; i++)
    {
        if (arr[i] <= target)
        {
            v.push_back(arr[i]);
            combination(v, arr, n, target - arr[i], i, result);
            v.pop_back();
        }
    }
}

int main()
{
    int arr[] = {2, 3, 5};
    vector<int> v;
    vector<vector<int>> result;
    combination(v, arr, 3, 8, 0, result);
    // cout << "Ok";
    // cout << result.size();
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}