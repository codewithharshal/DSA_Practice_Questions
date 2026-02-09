#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int pvt = v[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (v[j] < pvt)
        {
            swap(v[j], v[i]);
            i++;
        }
    }
    swap(v[i], v[high]);
    return i;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

int main()
{
    vector<int> v = {4, 9, 4, 4, 8, 4, 10, 9, 4};
    int n = v.size();
    quickSort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}