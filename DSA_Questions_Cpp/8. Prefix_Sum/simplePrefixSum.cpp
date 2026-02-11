#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        v[i] = sum;
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}