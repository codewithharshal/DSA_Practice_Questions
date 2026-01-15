#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = {'1', '2', '3'};
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout << temp << endl;
    }
    return 0;
}