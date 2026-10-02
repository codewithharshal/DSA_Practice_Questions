#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 1;
    int sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i < 0)
            break;
        sum += f(n - i);
    }
    return sum;
}

vector<int> dp(1000009, -1);

long long fub(int n)
{
    dp[0] = 1;
    for (int k = 1; k <= n; k++)
    {
        long long sum = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (k - i < 0)
                break;
            sum = (sum % 10000009 + dp[k - i] % 10000009) % 10000009;
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
}