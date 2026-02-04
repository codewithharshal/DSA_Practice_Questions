#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Pip(int n)
{
    if (n == 0)
        return;
    cout << "Pre : " << n << endl;
    Pip(n - 1);
    cout << "In : " << n << endl;
    Pip(n - 1);
    cout << "Post : " << n << endl;
}

int main()
{
    Pip(3);
    return 0;
}