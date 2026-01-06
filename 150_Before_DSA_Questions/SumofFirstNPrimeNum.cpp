#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int nth = 4;
    int count = 0;
    int num = 2;
    int sum = 0;

    while (count < nth)
    {
        if (isPrime(num))
        {
            sum += num;
            count++;
        }
        num++;
    }
    cout << "Sum of first " << nth << " prime numbers = " << sum;
    return 0;
}