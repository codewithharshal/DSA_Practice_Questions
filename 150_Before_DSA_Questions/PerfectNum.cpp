#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num = 496;
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << "Perfect Num: " << num;
    }
    return 0;
}