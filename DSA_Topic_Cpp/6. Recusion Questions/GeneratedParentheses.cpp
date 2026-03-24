#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void generated(string s, int open, int close, int n)
{
    if (open == n && open == close)
    {
        cout << s << endl;
        return;
    }
    if (open < n)
        generated(s + "(", open + 1, close, n);
    if (close < open)
        generated(s + ")", open, close + 1, n);
}
int main()
{
    int n = 3;
    generated("", 0, 0, n);
    return 0;
}