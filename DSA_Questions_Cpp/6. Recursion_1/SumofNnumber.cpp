#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SumOfN(int n)
{
    // Base Case
    if (n == 1)
        return 1;
    // Recursive Call
    return n + SumOfN(n - 1);
}

void SumN(int sum, int n)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    SumN(sum + n, n - 1);
}

int main()
{
    SumN(0, 10);
    return 0;
}