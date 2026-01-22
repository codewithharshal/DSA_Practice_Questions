#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "AZYZXBDJKX";
    string s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'X')
        {
            s += str[i];
        }
    }
    // Bubble sort
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (s[j] < s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    cout << s;
    return 0;
}