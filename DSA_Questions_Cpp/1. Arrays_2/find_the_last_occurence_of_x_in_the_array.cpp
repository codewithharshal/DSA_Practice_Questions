#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};
    int x = 1;
    int lastOcc = -1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (x == v[i])
        {
            lastOcc = i;
            break;
        }
    }

    cout << lastOcc;

    return 0;
}