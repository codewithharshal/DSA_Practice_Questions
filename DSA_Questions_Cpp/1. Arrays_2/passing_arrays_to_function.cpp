#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// regular way
void func1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

// pointer way
void func2(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    func2(arr, 10);

    return 0;
}