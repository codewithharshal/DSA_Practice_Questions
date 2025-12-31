#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int s = 10;
    int e = 30;
    for (int i = s; i <= e; i++)
    {
        if (Prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}