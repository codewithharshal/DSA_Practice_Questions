#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    vector<int> arr = {5, 9, 2, 6};
    int maximum_Diffrence = 0;

    for (int i = 0; i < n; i++)
    {
        int current_Diffrence = 0;
        for (int j = i; j < n; j++)
        {
            current_Diffrence = abs(arr[i] - arr[j]) + abs(i - j);
            maximum_Diffrence = max(maximum_Diffrence, current_Diffrence);
        }
    }
    cout << maximum_Diffrence;

    return 0;
}