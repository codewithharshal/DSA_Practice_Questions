#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {1, 200, 3, 4, 55, 6, 7, 8, 9};
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << max;
    return 0;
}