#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NCR(int k)
{
    int n = 1;
    for (int i = 2; i <= k; i++)
    {
        n = n * i;
    }
    return n;
}

int combination(int n, int r)
{
    int ncr = NCR(n) / (NCR(r) * NCR(n - r));
    return ncr;
}

// void Pascal(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << combination(i, j);
//         }
//         cout << endl;
//     }
// }

int main()
{
    // Addition , nCr

    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}