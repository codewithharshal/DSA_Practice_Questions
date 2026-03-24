#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Permutation(string ans, string orignal)
{
    if (orignal == "")
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < orignal.length(); i++)
    {
        char ch = orignal[i];
        string left = orignal.substr(0, i);
        string right = orignal.substr(i + 1);
        Permutation(ans + ch, left + right);
    }
}

int main()
{

    string str = "abc";
    Permutation("", str);
    return 0;
}