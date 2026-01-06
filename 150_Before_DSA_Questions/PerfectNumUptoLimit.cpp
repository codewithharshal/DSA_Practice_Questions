#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int n)
{
    if (n <= 1)
        return false;
    int divisorSum = 1;
    for (int divisor = 2; divisor <= sqrt(n); divisor++)
    {
        if (n % divisor == 0)
        {
            divisorSum += divisor;

            if (divisor != n / divisor)
            {
                divisorSum += n / divisor;
            }
        }
    }

    return divisorSum == n;
}

int main()
{

    int limit = 30;
    int count = 0;
    for (int i = 2; i <= limit; i++)
    {
        if (isPerfectNumber(i))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}