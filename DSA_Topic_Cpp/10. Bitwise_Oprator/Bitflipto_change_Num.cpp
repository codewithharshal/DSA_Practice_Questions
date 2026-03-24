#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minBitFlips(int a, int b)
{
    int diff = a ^ b;
    int count = 0;

    while (diff)
    {
        count += diff & 1; // check last bit
        diff >>= 1;
    }
    return count;
}

int main()
{
    cout << minBitFlips(5, 11);
    return 0;
}