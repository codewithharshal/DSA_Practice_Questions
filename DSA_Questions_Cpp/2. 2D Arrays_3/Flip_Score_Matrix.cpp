#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{0, 1}, {1, 1}};

    int row = v.size();
    int col = v[0].size();

    // check 1st index if that is 0 then toggle entier row
    for (int i = 0; i < row; i++)
    {
        if (v[i][0] == 0)
        {
            for (int j = 0; j < col; j++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }

    // for col check noz and noo which one are more if noz is more then toggle that col
    for (int i = 0; i < col; i++)
    {
        int noz = 0;
        int noo = 0;
        for (int j = 0; j < row; j++)
        {
            if (v[j][i] == 1)
                noo++;
            else
                noz++;
        }

        if (noz > noo)
        {
            for (int k = 0; k < row; k++)
            {
                if (v[k][i] == 0)
                    v[k][i] = 1;
                else
                    v[k][i] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // Now convert every row in Decimal and add it
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        int helper = 1;
        for (int j = 0; j < col; j++)
        {
            sum += v[j][i] * helper;
            helper *= 2;
        }
    }

    cout << sum << endl;
    cout << row << col << endl;

    return 0;
}