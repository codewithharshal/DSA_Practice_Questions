#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Define number of rows and columns of the original matrix
    int row = 2, col = 3;

    // Original matrix (2x3)
    int mat1[row][col] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Transpose matrix will be of size (3x2)
    int transpose[col][row];

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose logic:
    // Convert rows to columns and columns to rows
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = mat1[j][i];
        }
    }

    // Display the transposed matrix
    cout << "\nTranspose Matrix:" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
