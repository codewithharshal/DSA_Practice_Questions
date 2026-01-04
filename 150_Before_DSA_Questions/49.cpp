#include <iostream>
#include <algorithm>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        return -1; // Not enough elements
    }

    int first = INT8_MIN;
    int second = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return (second == INT8_MIN) ? -1 : second;
}

int main()
{
    int arr[] = {10, 5, 8, 12, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    if (result != -1)
    {
        cout << "Second Largest: " << result << endl;
    }
    else
    {
        cout << "No second largest found" << endl;
    }

    return 0;
}