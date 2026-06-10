#include <bits/stdc++.h>
using namespace std;

bool validOrnot(int n)
{
    vector<int> nums = {0, 1, 6, 8, 9};
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == n)
            return true;
    }
    return false;
}

int invert(int n)
{
    unordered_map<int, int> numsInvert;
    numsInvert[0] = 0;
    numsInvert[1] = 1;
    numsInvert[6] = 9;
    numsInvert[8] = 8;
    numsInvert[9] = 6;

    auto it = numsInvert.find(n);
    return it->second;
}

bool isConfusingNumber(int n)
{
    int result = 0;
    int temp = n;
    while (temp > 0)
    {
        int v = temp % 10;
        if (validOrnot(v))
        {
            int invertNums = invert(v);
            result = result * 10 + invertNums;
        }
        else
        {
            return false;
        }
        temp /= 10;
    }

    return n != result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example testcases. Replace, extend, or use these when testing your code.
    vector<int> tests = {
        6,
        89,
        11,
        25,
        0, // edge
        6891,
        6841};

    cout << "Confusing Number - Boilerplate Test Runs:\n";
    for (int x : tests)
    {
        bool res = isConfusingNumber(x);
        cout << "n = " << x << " -> " << (res ? "true" : "false") << '\n';
    }

    // If you prefer interactive input, uncomment below:
    // int T; if (cin >> T) { while (T--) { int n; cin >> n; cout << (isConfusingNumber(n) ? "true" : "false") << '\n'; }}

    return 0;
}
