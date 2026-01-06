#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cout << "Enter r: ";
    cin >> r;
    int a = 1;
    for (int i = 1; i <= r; i++) // row
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}