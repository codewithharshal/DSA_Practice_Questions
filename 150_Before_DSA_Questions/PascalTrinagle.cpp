#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row = 4;
    vector<vector<int>> Pascal(row, vector<int>(row));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                Pascal[i][j] = 1;
            }
            else
            {
                Pascal[i][j] = Pascal[i - 1][j] + Pascal[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}