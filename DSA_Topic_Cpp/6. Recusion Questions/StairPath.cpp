#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int StairPath(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return StairPath(n - 1) + StairPath(n - 2);
}

int main()
{
    cout << StairPath(6);
    return 0;
}