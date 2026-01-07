#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int num)
{

    if (num >= 0 and num <= 9)
    {
        return num;
    }
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    sumOfDigit(sum);
}

int main()
{
    int number = 99;
    cout << sumOfDigit(number);
    return 0;
}