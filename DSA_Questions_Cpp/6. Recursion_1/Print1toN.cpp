#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintReverse(int n)
{
    // Base Case
    if (n == 0)
        return;
    // Recursiv call
    // PrintReverse(n - 1); // call before pritn for asc
    cout << n;
    PrintReverse(n - 1); // call after pritn for des
}

int main()
{
    int n;
    cout << "Enter Num: ";
    cin >> n;
    PrintReverse(n);
    return 0;
}