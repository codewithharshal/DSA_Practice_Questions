#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // return index if found
        }
    }
    return -1; // return -1 if not found
}

int main()
{
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
