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
    cout << st << endl;

    st[0] = 'W';
    cout << st;
    return 0;
}