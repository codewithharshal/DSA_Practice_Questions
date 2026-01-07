#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    int mid = size / 2;
    // Upper trinagle
    for (int i = 0; i <= mid; i++)
    {
        for (int j = 0; j < mid - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for (int i = mid - 1; i >= 0; i--)
    {
        for (int j = 0; j < mid - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}