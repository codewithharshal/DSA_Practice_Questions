#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Formula
// iCj = i! / j! * (i-j)!
/*

int main()
{
    int n = 5;
    int v[5][5] = {0};
    v[0][0] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            vector<int> a(i);
            if (j == 0 || i == j)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/

int main()
{
    int n = 5;
    vector<vector<int>> v;
    v.push_back({1});
    for (int i = 1; i < n; i++)
    {
        v.push_back(vector<int>(i + 1));
        v[i][0] = v[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
