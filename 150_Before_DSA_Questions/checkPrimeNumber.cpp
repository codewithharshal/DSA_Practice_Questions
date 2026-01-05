#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hello";
    int size = 0;
    for (char x : str)
    {
        size++;
    }
    cout << size;
    return 0;
}