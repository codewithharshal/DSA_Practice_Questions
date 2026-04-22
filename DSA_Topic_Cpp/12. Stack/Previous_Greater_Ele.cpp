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
    helper.push(v[0]);

    for (int i = 1; i < size; i++)
    {
        // For previous smaller ">"
        if (!helper.empty() && v[i] < helper.top())
        {
            if (!helper.empty())
                ans[i] = helper.top();
            helper.push(v[i]);
        }
        else
        {
            // For previous smaller "<"
            while (!helper.empty() && v[i] >= helper.top())
            {
                helper.pop();
            }
            if (!helper.empty())
                ans[i] = helper.top();
            helper.push(v[i]);
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}