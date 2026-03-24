#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 3, col = 3;
    int mat[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            if (i != j)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < col; l++)
        {
            int i = 0;
            int j = row - 1;

            while (i < j)
            {
                swap(mat[k][i], mat[k][j]);
                i++;
                j--;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}