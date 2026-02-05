#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int a_size = a.size();
    int b_size = b.size();

    int i = 0, j = 0, k = 0;

    while (i < a_size && j < b_size)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    if (i == a_size)
    {
        while (j < b_size)
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (j == b_size)
    {
        while (i < a_size)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
}

void MergeSort(vector<int> &d)
{
    int n = d.size();
    int e_size = n / 2;
    int f_size = n - (n / 2);

    vector<int> e(e_size);
    vector<int> f(f_size);
    for (int i = 0; i < e_size; i++)
    {
        e[i] = d[i];
    }
    int j = 0;
    for (int i = e_size; i < n; i++)
    {
        f[j++] = d[i];
    }
    if (n <= 1)
        return;

    MergeSort(e);
    MergeSort(f);

    Merge(e, f, d);
}

int main()
{
    vector<int> a = {1, 3, 5, 7, 9, 14};
    vector<int> b = {2, 4, 6, 8, 10, 11, 15};
    vector<int> c(a.size() + b.size());

    vector<int> d = {5, 6, 7, 8, 4, 3, 2, 3, 1, 9, 11};
    MergeSort(d);

    for (int x : d)
    {
        cout << x << " ";
    }

    return 0;
}