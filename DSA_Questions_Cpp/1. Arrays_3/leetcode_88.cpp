#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// merge2sortedarrays
int main()
{
    vector<int> v1 = {1, 3, 5, 7, 9, 11, 18, 19, 20, 21, 22, 24};
    vector<int> v2 = {2, 4, 6, 8, 10, 12, 13, 14, 15};

    vector<int> result(v1.size() + v2.size());

    int i = 0;
    int j = 0;
    int k = 0;

    while (j < v2.size() && i < v1.size())
    {
        if (v1[i] < v2[j])
        {
            result[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = v2[j];
            j++;
            k++;
        }
    }

    while (i < v1.size())
    {
        result[k] = v1[i];
        i++;
        k++;
    }

    while (j < v2.size())
    {
        result[k] = v2[j];
        j++;
        k++;
    }

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}