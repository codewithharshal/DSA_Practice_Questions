#include <iostream>
#include <unordered_set>
using namespace std;

void permutation(string s, string r)
{
    if (s.size() == 0)
    {
        cout << r << endl;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        permutation(s.substr(0, i) + s.substr(i + 1, s.size()), r + ch);
    }
}

void permutation_2(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << endl;
        return;
    }
    unordered_set<char> s;
    for (int idx = i; idx < str.size(); idx++)
    {
        if (s.count(str[idx]))
            continue;

        s.insert(str[i]);
        swap(str[idx], str[i]);
        permutation_2(str, i + 1);
        swap(str[idx], str[i]);
    }
}

int main()
{
    string s = "aba";
    permutation_2(s, 0);
}