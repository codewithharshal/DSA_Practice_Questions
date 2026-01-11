#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = heights.size();

    // Prefix & Suffix Arrays
    // Hints Find (Previous Greatest Elements)
    // Hints Find (Next Greatest Elements)

    vector<int> PreviourGreater(n);
    vector<int> NextGreater(n);

    PreviourGreater[0] = heights[0];
    NextGreater[n - 1] = heights[n - 1];

    for (int i = 1; i < n; i++)
    {
        PreviourGreater[i] = max(PreviourGreater[i - 1], heights[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        NextGreater[i] = max(NextGreater[i + 1], heights[i]);
    }

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result += min(PreviourGreater[i], NextGreater[i]) - heights[i];
    }

    cout << result;

    return 0;
}