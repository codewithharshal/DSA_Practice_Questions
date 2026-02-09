#include <iostream>
using namespace std;

void cycleSort(int arr[], int n)
{
}

int main()
{
    int arr[] = {3, 2, 1, 5, 4, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cycleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
