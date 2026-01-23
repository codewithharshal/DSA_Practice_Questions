#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Unstable
int main()
{
    vector<int> v = {5, 3, 1, 4, 2};
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int MIN = INT_MAX;
        int K = -1;
        for (int j = i; j < n; j++)
        {
            if (v[j] < MIN)
            {
                MIN = v[j];
                K = j;
            }
        }
        swap(v[i], v[K]);
    }

    for (int i : v)
    {
        cout << i;
    }

    return 0;
}