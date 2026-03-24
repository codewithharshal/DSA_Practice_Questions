#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "asdfghjklasfasdaaa";
    vector<int> A(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        int S = s1[i];
        A[S - 97]++;
    }
    int max = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == max)
        {
            int Ascii = i + 97;
            char ch = (char)Ascii;
            cout << ch << " " << max << endl;
        }
    }
    return 0;
}