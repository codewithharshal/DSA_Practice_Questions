#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = i;
    int count = 0;
    int Max = INT_MIN;
    while (i < size && j <= size)
    {
        if (arr[i] == arr[j])
        {
            count++;
            j++;
        }
        else
        {
            if (count > Max)
            {
                Max = arr[i];
            }
            count = 0;
            i = j;
        }
    }

    cout << Max;

    return 0;
}