#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n, int i)
{
    if (i == n)
        return;
    cout << arr[i] << " ";
    display(arr, n, i + 1);
}

int main()
{
    int arr[] = {2, 1, 6, 3, 9, 0, 2, 7, 4};
    int n = 9;
    display(arr, n, 0);
    return 0;
}