#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 16;
    int b = 30;
    int Min = min(a, b);
    int GCD = 0;
    for (int i = 2; i <= Min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    cout << GCD;

    return 0;
}