#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> customers = {"Y", "Y", "N", "Y"};
    int n = customers.size();
    vector<int> pcn(n + 1);
    vector<int> scn(n + 1);

    pcn[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (customers[i] == "N")
            count++;
        pcn[i + 1] = pcn[i] + count;
    }
    scn[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int count = 0;
        if (customers[i] == "Y")
            count++;
        scn[i] = scn[i + 1] + count;
    }

    for (int i = 0; i <= n; i++)
    {
        pcn[i] += scn[i];
    }

    int MINI = INT_MAX;
    int idx = -1;
    for (int i = 0; i <= n; i++)
    {
        if (pcn[i] < MINI)
        {
            MINI = pcn[i];
            idx = i;
        }
    }

    cout << idx;

    return 0;
}