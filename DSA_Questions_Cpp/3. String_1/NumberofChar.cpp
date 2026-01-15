#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "asdfghjkl";
    int max = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int count = 1;
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[j] == s1[i])
            {
                count++;
            }
            if (max < count)
            {
                max = count;
            }
        }
    }
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int count = 1;
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[j] == s1[i])
            {
                count++;
            }
            if (count == max)
            {
                cout << ch << " " << max << endl;
            }
        }
    }

    cout << max;
    return 0;
}