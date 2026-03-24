#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 9, 5, 6, 7};
    int n = v.size();
    int k = 3;
    int Max_Sum = INT_MIN;
    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += v[j];
        }
        if (sum > Max_Sum)
        {
            Max_Sum = sum;
        }
    }
    cout << Max_Sum << " ";
    return 0;
}