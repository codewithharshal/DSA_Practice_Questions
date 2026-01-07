#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / i);
    }
    cout << sum;
    return 0;
}