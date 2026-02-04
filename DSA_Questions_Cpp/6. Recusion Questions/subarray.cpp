#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Unique Elements only
void subArray(vector<int> t, vector<int> v, int n, int i)
{
    if (i == n)
    {
        for (int i = 0; i < t.size(); i++)
        {
            cout << t[i] << ", ";
        }
        cout << endl;
        return;
    }
    subArray(t, v, n, i + 1);
    if (t.size() == 0 || v[i - 1] == t[t.size() - 1])
    {
        t.push_back(v[i]);
        subArray(t, v, n, i + 1);
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    int n = v.size();
    vector<int> t;
    int idx = 0;
    subArray(t, v, n, idx);
    return 0;
}