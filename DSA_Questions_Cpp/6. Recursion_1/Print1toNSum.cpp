#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Sum(int sum, int n)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    Sum(sum + n, n - 1);
}

int main()
{
    Sum(0, 10);
    return 0;
}