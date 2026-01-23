#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// n^2, n^2, n -> W, A, B
// stable sort
int main()
{
    vector<int> v = {5, 3, 1, 4, 2};
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
            j--;
        }
    }

    for (int i : v)
    {
        cout << i;
    }

    return 0;
}