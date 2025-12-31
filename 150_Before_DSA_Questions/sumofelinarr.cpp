#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}