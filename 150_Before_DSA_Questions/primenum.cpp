#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 97;
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
        cout << "Non Prime";
    }
    else
    {
        cout << "Prime";
    }
    return 0;
}