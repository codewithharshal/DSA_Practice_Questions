#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int t, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == t)
        {
            return {i, j};
        }
        else if (arr[i] + arr[j] < t)
        {
            i++;
        }
        else if (arr[i] + arr[j] > t)
        {
            j--;
        }
    }
    return {-1, -1};
}

int main()
{
    int n = 4;
    int arr[n] = {2, 7, 11, 15};
    int t = 9;

    vector<int> result = twoSum(arr, t, n);
    cout << result[0] << " " << result[1];
}