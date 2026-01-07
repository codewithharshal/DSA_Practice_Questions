#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Factorial(int num)
{

    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int num = 4;
    int x = Factorial(4);
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    cout << sum;
}