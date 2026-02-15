#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int k = 3;
    int n = v.size();

    for (int i = 0; i < n - k; i++)
    {
        int m = 0;
        for (int j = i; j < i + k; j++)
        {
            // Logic
            m = min(m, v[j]);
        }
        cout << i << ": " << m << " ";
        cout << endl;
    }
    return 0;
}