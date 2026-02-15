#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 9, 5, 6, 7};
    int n = v.size();
    int k = 3;

    int Pre_Sum = 0;
    int Cur_Sum = 0; // Window Sum

    // Current Window Sum
    for (int i = 0; i < k; i++)
    {
        Cur_Sum += v[i];
    }

    // Next Window Sum
    int Max_Sum = Cur_Sum;
    for (int i = k; i < n; i++)
    {
        Cur_Sum += v[i];
        Cur_Sum -= v[i - k];
        Max_Sum = max(Max_Sum, Cur_Sum);
    }
    cout << Max_Sum;

    return 0;
}