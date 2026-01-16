#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Hello i am full stack dev";
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}