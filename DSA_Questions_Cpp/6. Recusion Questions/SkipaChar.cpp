#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SkipChar(string ans, string original)
{
    if (original.length() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
    {

        SkipChar(ans, original.substr(1));
    }
    else
    {

        SkipChar(ans + ch, original.substr(1));
    }
}

int main()
{
    string str = "harshal";
    SkipChar("", str);
}