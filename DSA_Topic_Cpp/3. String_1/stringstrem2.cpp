#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string temp;
    stringstream ss(s);
    while (ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}