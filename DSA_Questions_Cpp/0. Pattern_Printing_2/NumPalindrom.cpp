#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}