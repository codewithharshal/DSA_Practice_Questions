#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 1, 2, 4};
    sort(v.begin(), v.end());
    int len = v.size();
    if (len % 2 != 0)
    {
        int mid = len / 2;
        cout << v[mid];
    }
    else
    {
        int mid = len / 2;
        cout << v[mid - 1];
    }
    return 0;
}