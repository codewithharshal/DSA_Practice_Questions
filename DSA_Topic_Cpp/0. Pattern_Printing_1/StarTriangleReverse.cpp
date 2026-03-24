#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cout << "Enter r: ";
    cin >> r;
    for (int i = 1; i <= r; i++) // row
    {
        for (int j = 1; j <= r - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}