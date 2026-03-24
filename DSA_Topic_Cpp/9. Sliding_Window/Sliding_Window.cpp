#include <bits/stdc++.h>
using namespace std;

void printWindows(vector<int> &arr, int k)
{
    int n = arr.size();

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    printWindows(arr, k);
}
