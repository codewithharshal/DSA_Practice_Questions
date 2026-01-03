#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force
bool Palindrom(string str)
{
    int i = 0;
    int j = str.size() - 1;
    bool flag = true;

    while (i <= j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{
    string str = "aabaabc";
    int n = str.length();
    if (n == 0)
        cout << "";

    string lps = str.substr(0, 1);
    int maxLength = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string s = str.substr(i, j - i + 1);
            if (Palindrom(s))
            {
                if (s.length() > maxLength)
                {
                    lps = s;
                    maxLength = s.length();
                }
            }
        }
    }

    cout << lps;
    return 0;
}