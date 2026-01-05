#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int arr[] = {6, 9, 12};
    int size = 3;

    int g = arr[0];
    for (int i = 1; i < size; i++)
    {
        g = gcd(g, arr[i]);
    }
    cout << g;

    return 0;
}