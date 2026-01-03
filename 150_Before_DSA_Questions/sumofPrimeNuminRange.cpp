#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Prime(int num)
{
    if (num == 1)
        return false;
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

    int s = 1;
    int e = 10;
    int sum = 0;
    for (int i = s; i <= e; i++)
    {
        if (Prime(i))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}