#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintinRange(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    PrintinRange(i + 1, n);
}

void Print(int n)
{
    if (n == 0)
        return;
    Print(n - 1); // call before printing i
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter Num: ";
    cin >> n;
    // PrintinRange(6, n);

    return 0;
}