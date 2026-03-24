#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// T.C = O(log(a+b))
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    else
        return GCD(b % a, a);
}

int main()
{
    cout << GCD(12, 30);
    return 0;
}