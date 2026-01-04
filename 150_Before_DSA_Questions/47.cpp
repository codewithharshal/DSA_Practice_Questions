#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 4;
    for (int i = 0; i < rows; i++)
    {
        int x = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << x++ << " ";
        }
        cout << endl;
    }
    return 0;
}