#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{0, 0, 1, 1},
                             {1, 1, 1, 1},
                             {0, 0, 0, 0}};
    int max = 0;
    int row = 0;
    for (int i = 0; i < 3; i++)
    {
        int ones = 0;
        for (int j = 0; j < 4; j++)
        {
            if (v[i][j] == 1)
            {
                ones++;
            }
        }
        if (max < ones)
        {
            row = i;
        }
    }
    cout << row;

    return 0;
}