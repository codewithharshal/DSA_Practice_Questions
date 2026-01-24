#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {19, 12, 23, 8, 16};
    int n = v.size();

    for (int rank = 0; rank < n; rank++)
    {
        int minIdx = -1;
        int minVal = INT_MAX;

        // find minimum unprocessed element
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= 0 && v[i] < minVal)
            {
                minVal = v[i];
                minIdx = i;
            }
        }

        // assign rank
        v[minIdx] = -rank - 1;
    }

    // convert negative marks to final ranks
    for (int i = 0; i < n; i++)
    {
        v[i] = -v[i] - 1;
    }

    for (int x : v)
        cout << x << " ";

    return 0;
}
