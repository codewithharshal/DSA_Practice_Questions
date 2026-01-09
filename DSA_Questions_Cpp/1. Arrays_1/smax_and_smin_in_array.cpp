#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << max << min << endl;

    int smax = INT_MIN;
    int smin = INT_MAX;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }

    cout << smax << smin << endl;

    return 0;
}