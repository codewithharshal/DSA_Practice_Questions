#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func1(vector<int> v1)
{
    vector<int> v2(v1.size());

    int j = 0;
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        v2[j++] = v1[i];
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }
}

void func2(vector<int> v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    func2(v1);

    return 0;
}