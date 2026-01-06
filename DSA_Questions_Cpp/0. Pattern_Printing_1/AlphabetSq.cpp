#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter row and col: ";
    cin >> r >> c;
    for (int i = 0; i < r; i++) // row
    {
        char ch = 'A';
        for (int j = 1; j <= c; j++) // col
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}