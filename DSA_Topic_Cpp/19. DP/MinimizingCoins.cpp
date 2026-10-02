#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100006, -2);
int minimizingCoins(int t, int n, int coins[])
{
    if (t == 0)
        return 0;
    if (dp[t] != -2)
        return dp[t];

    int result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (t - coins[i] < 0)
            continue;
        result = min(result, minimizingCoins(t - coins[i], n, coins));
    }
    if (result == INT_MAX)
        return dp[t] = INT_MAX;
    return dp[t] = 1 + result;
}

int main()
{
    int n, coins[n], target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cin >> target;

    cout << minimizingCoins(target, n, coins);
}