#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int n, int j)
{
    if (s[n] != s[j])
    {
        return false;
    }
    else
    {
        return true;
    }
    isPalindrome(s, n++, j--);
}

int main()
{
    string s = "racecar";
    cout << isPalindrome(s, 0, s.length() - 1);

    return 0;
}