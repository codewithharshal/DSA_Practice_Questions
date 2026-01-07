#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// |a*b|/gcd(a,b)

int GCD(int a, int b)
{
    int Min = min(a, b);
    int GCD = 0;
    for (int i = 2; i <= Min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    return GCD;
}
int main()
{
    int a = 12;
    int b = 15;
    int LCM = ((a * b) / GCD(a, b));

    cout << LCM;

    return 0;
}