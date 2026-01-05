#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int digits(int num)
{
    if (num == 0)
        return 1;

    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int amstrongNum(int num)
{
    int n = 0;
    int tmp = num;
    int count = digits(num);

    while (tmp > 0)
    {
        int x = tmp % 10;
        n += abs(pow(x, count));
        tmp /= 10;
    }
    return n;
}

int main()
{
    int range = 500;
    for (int i = 0; i <= range; i++)
    {
        if (i == amstrongNum(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}