#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << (i + 1) * (j + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}