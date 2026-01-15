#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of String: ";
    cin >> n;
    char st[n];
    cout << "Enter String: ";
    cin >> st;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
        {
            count++;
        }
    }
    cout << count << " ";
    return 0;
}