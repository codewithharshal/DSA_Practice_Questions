#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> stockPrice = {100, 80, 60, 120};
    vector<int> ans(stockPrice.size(), 0);
    int n = stockPrice.size();
    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (int j = i; j >= 0; j--)
        {
            if (stockPrice[j] <= stockPrice[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans[i] = count;
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}