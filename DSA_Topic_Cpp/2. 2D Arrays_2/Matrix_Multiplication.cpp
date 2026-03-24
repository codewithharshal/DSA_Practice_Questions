#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row_1 = 3, col_1 = 3;
    int row_2 = 3, col_2 = 3;

    int mat1[row_1][col_1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[row_2][col_2] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int result[row_1][col_2] = {};

    if (col_1 == row_2)
    {
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_2; j++)
            {
                // ((1 * 1) + (2 * 4) + (3 * 7))
                for (int r = 0; r < col_2; r++)
                {
                    result[i][j] += mat1[i][r] * mat2[r][j];
                }
            }
        }
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}