#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int t = 5;
    int t_zero = 0;
    while (t <= n)
    {
        t_zero += n / t;
        t *= 5;
    }
    return t_zero;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << trailingZeroes(i) << endl;
    }
    return 0;
}
