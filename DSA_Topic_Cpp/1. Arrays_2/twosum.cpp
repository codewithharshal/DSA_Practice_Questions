#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(n^2)
int main()
{
    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};
    int x = 7;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "[" << i << "," << j << "]" << endl;
            }
        }
    }

    return 0;
}