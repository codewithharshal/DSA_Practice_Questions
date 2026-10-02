#include <bits/stdc++.h>
using namespace std;

vector<int> LSP(string pattern)
{
    int n = pattern.size();

    vector<int> lsp(n, 0);

    int len = 0;
    int i = 1;

    while (i < n)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lsp[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lsp[len - 1];
            }
            else // for i = 1;
            {
                lsp[i] = 0;
                i++;
            }
        }
    }

    return lsp;
}

vector<int> KMP(string text, string pattern)
{

    vector<int> result;
    vector<int> lsp = LSP(pattern);

    int i = 0;
    int j = 0;

    while (i < text.size())
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }

        if (j == pattern.size())
        {
            result.push_back(i - j);
            j = lsp[j - 1];
        }
        else if (i < text.size() && text[i] != pattern[j])
        {
            if (j != 0)
            {
                j = lsp[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return result;
}

int main()
{

    string text = "ababababca";
    string pattern = "ababca";
    vector<int> res = KMP(text, pattern);

    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}
