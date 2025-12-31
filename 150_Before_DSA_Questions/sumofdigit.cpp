#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 12345;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    cout << sum;
    return 0;
}