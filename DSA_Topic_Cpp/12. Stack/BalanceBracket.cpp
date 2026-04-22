#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "))))())";
    stack<char> b;
    int s_size = s.length();
    if (s.empty() || s_size % 2 != 0)
    {
        cout << "false";
        return 0;
    }
    for (int i = 0; i < s_size; i++)
    {
        if (s[i] == '(')
        {
            b.push(s[i]);
        }
        else
        {
            char x = b.top();
            if (!b.empty() && x != s[i])
            {
                b.pop();
            }
        }
    }
    if (b.empty())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}