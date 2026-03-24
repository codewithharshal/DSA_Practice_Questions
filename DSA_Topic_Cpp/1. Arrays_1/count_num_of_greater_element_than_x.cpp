#include <iostream>
using namespace std;

int count_num_of_greater_element_than_x(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {3, 7, 1, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 4;

    cout << count_num_of_greater_element_than_x(arr, n, x);

    return 0;
}
