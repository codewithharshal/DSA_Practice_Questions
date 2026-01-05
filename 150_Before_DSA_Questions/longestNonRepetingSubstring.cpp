#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// checks if all chars are unique
bool longestNonRepetingSubString(string str)
{
    int n = str.length();
    if (n < 2)
        return true;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
                return false;
        }
    }
    return true;
}

int main()
{
    string str = "aabaabc";
    int n = str.length();

    string lps = "";   // longest substring
    int maxLength = 0; // max length

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string s = str.substr(i, j - i + 1);

            if (longestNonRepetingSubString(s))
            {
                if ((int)s.length() > maxLength)
                {
                    maxLength = s.length();
                    lps = s;
                }
            }
        }
    }

    cout << "Longest substring without repeating characters: "
         << lps << endl;

    cout << "Length: " << maxLength << endl;

    return 0;
}
