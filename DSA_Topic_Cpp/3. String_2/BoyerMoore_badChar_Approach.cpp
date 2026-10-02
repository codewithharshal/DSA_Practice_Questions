#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

// str = "AABAACAADAABAABA"
// ptr = "AABA"

void badCharHeuristic(string str, int size, int badChar[NO_OF_CHARS])
{
    // Initializa all occurrences as -1
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        badChar[i] = -1;
    }

    // Fill the actual value of last occurrence of a charecter
    for (int i = 0; i < size; i++)
    {
        badChar[(int)str[i]] = i;
    }
}

void search(string txt, string pat)
{
    int m = pat.length();
    int n = txt.size();

    int badChar[NO_OF_CHARS];

    badCharHeuristic(pat, m, badChar);

    int s = 0;
    while (s <= (n - m))
    {
        int j = m - 1;

        while (j >= 0 && pat[j] == txt[s + j])
        {
            j--;
        }

        if (j < 0)
        {
            cout << "pattern occurs at shift: " << s << endl;
            s += (s + m < n) ? m - badChar[txt[s + m]] : 1; // shift
        }
        else
        {
            s += max(1, j - badChar[txt[s + j]]); // shift
        }
    }
}

int main()
{
    string txt = "AABAACAADAABAABA";
    string pat = "AABA";
    search(txt, pat);
    return 0;
}