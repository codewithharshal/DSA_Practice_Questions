#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// vector is pass by values
void fun1(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

// vector is pass by reffence
void fun2(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

int main()
{
    vector<int> v(5);
    fun1(v);

    return 0;
}