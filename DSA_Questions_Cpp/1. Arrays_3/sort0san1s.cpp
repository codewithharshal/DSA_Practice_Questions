#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1. Two pass method
// 2. two pointer
vector<int> func1(vector<int> &v)
{
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else
        {
            noo++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {

            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}

vector<int> func2(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 1 && v[j] == 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }
        else if (v[j] == 1)
        {
            j--;
        }
    }
}
int main()
{

    vector<int> v = {1, 1, 0, 1, 0, 1, 1, 0};
    func2(v);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}