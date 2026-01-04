#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int count = 0;
    for (int x : arr)
    {
        sum += x;
        count++;
    }
    cout << sum / count;
    return 0;
}