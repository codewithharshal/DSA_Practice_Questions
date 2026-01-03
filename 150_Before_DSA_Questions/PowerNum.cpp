#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int base = 5;
    int exponent = 5;
    int ans = 1;

    for (int i = 0; i < exponent; i++)
    {
        ans *= base;
    }

    cout << ans;

    return 0;
}