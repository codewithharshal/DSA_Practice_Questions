#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row and col: ";
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == j || i + j == r + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}