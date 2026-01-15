#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s1 = {"flower", "flight", "flow"};
    sort(s1.begin(), s1.end());
    int l = s1.size();
    string n;
    string st;
    n = s1[0];
    st = s1[l - 1];
    int i = 0;
    string temp;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == st[i])
        {
            temp += n[i];
        }
    }
    cout << temp;

    return 0;
}