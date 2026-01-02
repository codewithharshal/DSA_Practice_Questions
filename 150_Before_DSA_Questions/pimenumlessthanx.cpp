#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Prime(int number)
{
    bool flag = false; // all are prime
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            flag = true; // non prime
            break;
        }
    }

    if (flag)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int to = 20;

    for (int i = 2; i <= to; i++)
    {
        if (Prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
