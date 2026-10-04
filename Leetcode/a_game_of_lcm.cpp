#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    if (a == 0 && b == 0)
        return 0;
    if (a == 1)
        return b;
    if (b == 1)
        return a;
    return (a / __gcd(a, b)) * b;
}

int LCM_of_fourNumber(int a, int b, int c, int d)
{
    int currentLcm = 1;
    currentLcm = LCM(currentLcm, a);
    currentLcm = LCM(currentLcm, b);
    currentLcm = LCM(currentLcm, c);
    currentLcm = LCM(currentLcm, d);
    return currentLcm;
}

int main()
{
    int n = 6;
    int maxLcm = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                for (int l = 1; l <= n; l++)
                {
                    maxLcm = max(maxLcm, LCM_of_fourNumber(i, j, k, l));
                }
            }
        }
    }
    cout << maxLcm << endl;

    return 0;
}