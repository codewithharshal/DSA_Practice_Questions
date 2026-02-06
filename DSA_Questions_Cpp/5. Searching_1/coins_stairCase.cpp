#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int i = 1;
    while (i < n)
    {
        for (int j = 1; j <= i; j++)
        {
            n--;
        }
        i++;
    }

    cout << i - 1;
    return 0;
}