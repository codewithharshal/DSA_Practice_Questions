#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_power_of_2(int n)
{
    n |= (n >> 1);
    n |= (n >> 2);
    n |= (n >> 4);
    n |= (n >> 8);
    n |= (n >> 16);

    return (n + 1 >> 1);
}

int main()
{
    // int x = 100;
    // int temp;
    // while (x != 0)
    // {
    //     temp = x;
    //     x = (x & (x - 1));
    // }
    // cout << temp;
    cout << max_power_of_2(23);
    return 0;
}