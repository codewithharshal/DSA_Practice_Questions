#include <bits/stdc++.h>
using namespace std;

vector<int> getDigit(int num)
{
    vector<int> digit;
    while (num > 0)
    {
        if (num % 10 != 0)
        {
            digit.push_back(num % 10);
        }
        num /= 10;
    }
    return digit;
}

/*
int removingDigit(int number)
{
    if (number == 0)
        return 0;
    if (number >= 1 && number <= 9)
        return 1;

    vector<int> d = getDigit(number);

    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        result = min(result, removingDigit(number - d[i]));
    }

    return 1 + result;
}
*/

/*
// DP array
vector<int> dp(100005, -1);

int removingDigitDP(int number)
{
    if (number == 0)
        return 0;
    if (number >= 1 && number <= 9)
        return 1;
    if (dp[number] != -1)
        return dp[number];

    vector<int> d = getDigit(number);

    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        result = min(result, removingDigitDP(number - d[i]));
    }

    return dp[number] = 1 + result;
}
*/

/*
vector<int> dp(1000005, -1);

int fbu(int num)
{
    dp[0] = 0;
    for (int i = 1; i <= 9; i++)
        dp[i] = 1;
    for (int n = 10; n <= num; n++)
    {
        vector<int> d = getDigit(n);
        int result = INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
            result = min(result, dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }

    return dp[num];
}
*/

int main()
{
    // cout << fbu(510);
    return 0;
}
