#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// TC : O(n^2) -> Worst when array is in desending sorted
// TC : O(n^2) -> average case random array
// TC : O(n) -> sorted in asending
int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9};
    int n = 6;
    bool swapped;
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = i; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}