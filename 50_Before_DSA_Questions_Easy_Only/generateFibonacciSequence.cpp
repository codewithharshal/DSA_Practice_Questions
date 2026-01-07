#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int a = 0;
    int b = 1;
    int c;
    cout << a << " " << b << " ";
    for (int i = 2; i < num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}