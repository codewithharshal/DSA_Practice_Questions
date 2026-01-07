#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 7, 1, 8, 5};
    int Max = 0;
    int Min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    cout << Max << endl;
    cout << Min << endl;
    return 0;
}