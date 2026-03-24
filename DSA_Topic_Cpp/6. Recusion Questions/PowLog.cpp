#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * Power(x, n - 1);
}

int PowerLog(int x, int n)
{
    if (n == 1)
        return x;
    int ans = 1;
    if (n % 2 == 0)
        ans = PowerLog(x, n / 2);
    else
        ans = PowerLog(x, n / 2) * x;
    return ans * ans;
}

int main()
{

    cout << PowerLog(2, -2);
    return 0;
}