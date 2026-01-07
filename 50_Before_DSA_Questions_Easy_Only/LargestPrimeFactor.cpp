#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int number = 28;
    int Max = -1;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && isPrime(i))
            Max = max(Max, i);
    }

    cout << Max;
    return 0;
}
