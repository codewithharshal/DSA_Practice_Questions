#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    cout << fac;
    return 0;
}