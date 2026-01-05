#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 12;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}