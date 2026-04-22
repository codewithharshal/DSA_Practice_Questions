#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> stockPrice = {120, 100, 60, 80, 90, 110, 115};
    vector<int> ans(stockPrice.size());
    stack<int> NGEIdx;
    ans[0] = 1;
    NGEIdx.push(0);

    for (int i = 1; i < stockPrice.size(); i++)
    {
        NGEIdx.push(i);
        while (!NGEIdx.empty() && stockPrice[NGEIdx.top()] <= stockPrice[i])
        {
            NGEIdx.pop();
        }

        if (!NGEIdx.empty())
        {
            ans[i] = i - NGEIdx.top();
        }
        else
        {
            ans[i] = i - 1;
        }
        NGEIdx.push(i);
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}