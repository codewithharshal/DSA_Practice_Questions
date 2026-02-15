#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> c = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> g = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes = 3;

    int cn = c.size();

    int prevLoss = 0;

    // Initial window
    for (int i = 0; i < minutes; i++)
    {
        if (g[i] == 1)
            prevLoss += c[i];
    }

    int maxLoss = prevLoss;
    int maxIdx = 0;

    int i = 1;
    int j = minutes;

    // Sliding window
    while (j < cn)
    {
        int curLoss = prevLoss;

        if (g[j] == 1)
            curLoss += c[j];

        if (g[i - 1] == 1)
            curLoss -= c[i - 1];

        if (maxLoss < curLoss)
        {
            maxLoss = curLoss;
            maxIdx = i;
        }

        prevLoss = curLoss;
        i++;
        j++;
    }

    // Convert selected window to satisfied
    for (int k = maxIdx; k < maxIdx + minutes; k++)
    {
        g[k] = 0;
    }

    int sum = 0;

    // Calculate total satisfied customers
    for (int k = 0; k < cn; k++)
    {
        if (g[k] == 0)
            sum += c[k];
    }

    cout << sum;

    return 0;
}
