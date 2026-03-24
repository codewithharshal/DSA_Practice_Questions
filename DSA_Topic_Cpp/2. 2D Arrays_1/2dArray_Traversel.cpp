#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "Rows: " << row << endl;
    cout << "Cols: " << col << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
