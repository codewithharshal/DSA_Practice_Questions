#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Overflow Not handle
    // int n = -2147483648;
    // int n = 2147483648;
    int n = 12342;
    int rev = 0;

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << rev;

    return 0;
}