#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 8, 4};
    int n = v.size();
    vector<int> prePro(n, 1);
    vector<int> suffPro(n, 1);
    vector<int> ans(n);

    for (int i = 1; i < n; i++)
    {
        prePro[i] = v[i - 1] * prePro[i - 1];
    }

    for (int j = n - 2; j >= 0; j--)
    {
        suffPro[j] = v[j + 1] * suffPro[j + 1];
    }
    for (int k = 0; k < n; k++)
    {
        ans[k] = suffPro[k] * prePro[k];
    }
    cout << endl;
    for (int x : ans)
    {
        cout << x << " ";
    }
}