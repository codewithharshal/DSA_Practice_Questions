#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// O(n) -> B
// O(n^2) -> A
// O(n^2) -> W
// Stable Sort
// Decresion order -> n*(n-1)/2
// Acending order -> n
int main()
{

    int arr[] = {1, 2, 4, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = false;
            }
        }
        if (sorted == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}