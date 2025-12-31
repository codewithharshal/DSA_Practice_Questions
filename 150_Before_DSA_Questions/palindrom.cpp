#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "raadar";
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
        cout << "Palindrom";
    }
    else
    {
        cout << "Non a Palindrom";
    }
    return 0;
}