#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrom(string str)
{
    int n = str.length();
    if (n == 1)
    {
        return true;
    }
    else if (n == 2)
    {
        if (str[0] == str[1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int i = 0;
        int j = n - 1;
        while (i < j)
        {

            if (str[i] == str[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string str = "aaa";
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string s = str.substr(i, j - i + 1);
            if (isPalindrom(s))
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}