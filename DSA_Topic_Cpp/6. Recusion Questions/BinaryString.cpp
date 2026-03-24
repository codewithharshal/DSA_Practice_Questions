#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void BinaryNum(string s, int n)
{
    if (s.length() == n)
    {
        cout << s << endl;
        return;
    }
    BinaryNum(s + "0", n);
    if (s == "" || s[s.length() - 1] == '0')
    {
        BinaryNum(s + "1", n);
    }
}

int main()
{
    int n = 4;
    BinaryNum("", n);

    return 0;
}