#include <bits/stdc++.h>
using namespace std;

/*
Valid Word Square Problem:
Given an array of unique strings, check if it forms a valid word square.
A valid word square means:
- square[i][j] == square[j][i] for all i, j
- All words have the same length
- The array length equals the word length

Example:
Input: ["abcd", "bcda", "cdab", "dabc"]
Output: true
*/

bool validWordSquare(vector<string> &words)
{
    int n = words.size();
    if (n == 0)
        return false;

    // Check that all words have the same length, and that length equals n
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() != n)
        {
            return false;
        }
    }

    // Check the word square property: words[i][j] == words[j][i]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (words[i][j] != words[j][i])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    // Test Case 1: Valid word square
    vector<string> test1 = {"abcd", "bcda", "cdab", "dabc"};
    cout << "Test Case 1: " << (validWordSquare(test1) ? "true" : "false") << endl;

    // Test Case 2: Invalid word square
    vector<string> test2 = {"abcd", "bcde", "cdab", "dabc"};
    cout << "Test Case 2: " << (validWordSquare(test2) ? "true" : "false") << endl;

    // Test Case 3: Valid single character
    vector<string> test3 = {"a"};
    cout << "Test Case 3: " << (validWordSquare(test3) ? "true" : "false") << endl;

    // Test Case 4: Invalid - different lengths
    vector<string> test4 = {"ab", "abc"};
    cout << "Test Case 4: " << (validWordSquare(test4) ? "true" : "false") << endl;

    // Test Case 5: Valid 2x2 square
    vector<string> test5 = {"ab", "ba"};
    cout << "Test Case 5: " << (validWordSquare(test5) ? "true" : "false") << endl;

    return 0;
}
