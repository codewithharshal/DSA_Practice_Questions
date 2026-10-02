#include <iostream>
#include <vector>
using namespace std;

// Memoization
int fib(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

// Tabulation
int fibT(int n)
{
    vector<int> tb(n + 1);
    tb[0] = 0;
    tb[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        tb[i] = tb[i - 1] + tb[i - 2];
    }
    return tb[n];
}

int main()
{
    // int n = 7;
    // vector<int> dp(n + 1, -1);
    // cout << fib(n, dp);

    int n = 8;
    cout << fibT(n);
}