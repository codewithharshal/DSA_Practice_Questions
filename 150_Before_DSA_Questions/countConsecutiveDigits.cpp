#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 1223334445;
    vector<int> v;
    while (number > 0)
    {
        v.push_back(number % 10);
        number /= 10;
    }

    int i = 0;
    int j = i;

    int n = v.size();

    int count = 0;
    while (i <= n && j <= n)
    {
        if (v[i] == v[j])
        {
            count++;
            j++;
        }
        else
        {
            cout << v[i] << ": " << count << endl;
            count = 0;
            i = j;
        }
    }

    return 0;
}