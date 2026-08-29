#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void generate(vector<int> &A, vector<int> &B, vector<int> &path,
              int lastEle, bool useA, vector<vector<int>> &ans)
{
    if (!path.empty())
        ans.push_back(path);

    vector<int> &cur = useA ? A : B;
    for (int val : cur)
    {
        if (val > lastEle)
        {
            path.push_back(val);
            generate(A, B, path, val, !useA, ans); // pass val, flip source
            path.pop_back();
        }
    }
}

int main()
{
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};

    vector<int> path; // start empty, not size 8
    vector<vector<int>> ans;

    generate(A, B, path, INT_MIN, true, ans);  // sequences starting with A
    generate(A, B, path, INT_MIN, false, ans); // sequences starting with B

    for (auto &row : ans)
    {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}