#include <bits/stdc++.h>
using namespace std;

vector<int> zArray(string &s)
{
    int l = 0, r = 0;
    int n = s.length();

    vector<int> z(n);

    for (int i = 0; i < n; i++)
    {
        if (i > r)
        {
            // i is outside the current [l, r] interval
            l = r = i;
            while (r < n && s[r] == s[r - l])
            {
                r++;
            }
            z[i] = r - l;
            r--;
        }
        else
        {
            // i is inside the current [l, r] interval
            int rel_ind = i - l;
            if (z[rel_ind] + i <= r)
            {
                z[i] = z[rel_ind];
            }
            else
            {
                l = i;
                while (r < n && s[r] == s[r - l])
                {
                    r++;
                }
                z[i] = r - l;
                r--;
            }
        }
    }
    return z;
}

int main()
{
    string pattern = "sad";
    string text = "sadbutsad";
    string combined = pattern + "$" + text;
    vector<int> z = zArray(combined);
    vector<int> result;
    int m = pattern.length();

    for (int i = m + 1; i < z.size(); ++i)
    {
        if (z[i] == m)
        {
            result.push_back(i - m - 1);
        }
    }

    for (int i : result)
    {
        cout << i << " ";
    }
}
