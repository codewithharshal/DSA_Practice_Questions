#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "listen";
    string str2 = "silent";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int i = str1.length() - 1;
    int j = str2.length() - 1;

    bool flg = true;

    while (i >= 0 && j >= 0)
    {
        if (str1[i] == str2[j])
        {
            i--;
            j--;
        }
        else
        {
            flg = false;
            break;
        }
    }

    if (flg)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}