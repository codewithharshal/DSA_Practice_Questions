#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 153;
    int temp = num;
    int tmp = num;
    int sum = 0;

    int count = 0;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    for (int i = 0; i < count; i++)
    {
        int x = tmp % 10;
        sum += abs(pow(x, count));
        tmp /= 10;
    }

    cout << sum;

    return 0;
}