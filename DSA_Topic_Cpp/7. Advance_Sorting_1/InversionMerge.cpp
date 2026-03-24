#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int inversion(vector<int> &a, vector<int> &b)
{
    int c = 0;
    int an = a.size();
    int bn = b.size();

    int i = 0;
    int j = 0;

    while (i < an && j < bn)
    {
        if (a[i] > b[j])
        {
            j++;
            c += an - i;
        }
        else
        {
            i++;
        }
    }
    return c;
}

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int an = a.size();
    int bn = b.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            k++;
            i++;
        }
        else
        {
            res[k] = b[j];
            k++;
            j++;
        }
    }

    if (i == an)
    {
        while (j < bn)
        {
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if (j == bn)
    {
        while (i < an)
        {
            res[k] = a[i];
            k++;
            i++;
        }
    }
}

int mergeSort(vector<int> &a)
{
    int count = 0;
    int n = a.size();
    if (n <= 1)
    {
        return count;
    }
    int ha = n / 2;
    vector<int> b(ha);
    for (int i = 0; i < ha; i++)
    {
        b[i] = a[i];
    }
    vector<int> c(n - ha);
    for (int i = ha; i < n; i++)
    {
        c[i - ha] = a[i];
    }

    count += mergeSort(b);
    count += mergeSort(c);
    count += inversion(b, c);

    merge(b, c, a);
    return count;
}

int main()
{
    vector<int> a = {1, 4, 0, 1, 3, 5, 7, 9};
    int an = a.size();
    int count = mergeSort(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << count;
    return 0;
}