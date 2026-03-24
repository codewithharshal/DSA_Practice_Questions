#include <iostream>
#include <vector>
using namespace std;

int isMountainValleyPattern(const vector<int> &arr)
{
    // Implement your logic here
    int n = arr.size();

    if (n == 1)
        return 1;

    int preSign = 0;
    for (int i = 1; i < n; i++)
    {
        int currentSign = 0;
        if (arr[i] > arr[i - 1])
            currentSign = 1;
        else if (arr[i] < arr[i - 1])
            currentSign = -1;
        else
            return 0;

        if (preSign != 0 && currentSign == preSign)
        {
            return 0;
        }
        preSign = currentSign;
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int result = isMountainValleyPattern(arr);
    cout << result << endl;
    return 0;
}