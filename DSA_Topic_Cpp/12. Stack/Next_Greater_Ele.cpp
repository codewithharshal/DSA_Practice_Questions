#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3, 4, 8, 4, 5, 1, 7, 5, 8, 9};
    vector<int> ans(v.size(), 0);
    stack<int> helper;
    int size = v.size();
    helper.push(v[size - 1]);

    for (int i = size - 2; i >= 0; i--)
    {
        // For next smaller ">"
        if (v[i] < helper.top())
        {
            ans[i] = helper.top();
            helper.push(v[i]);
        }
        else
        {
            // For next smaller "<"
            while (v[i] >= helper.top())
            {
                helper.pop();
            }
            ans[i] = helper.top();
            helper.push(v[i]);
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}