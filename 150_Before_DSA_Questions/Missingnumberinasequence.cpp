#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// only find first missing num in arr
int main()
{

    vector<int> sequence = {1, 3, 4, 7};
    int n = sequence.size();

    for (int i = 0; i <= n; i++)
    {
        int x = sequence[i];
        if (x == i + 1)
        {
            continue;
        }
        else
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}