#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Shape of matrix is need to be equal for adding
int main()
{
    int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}