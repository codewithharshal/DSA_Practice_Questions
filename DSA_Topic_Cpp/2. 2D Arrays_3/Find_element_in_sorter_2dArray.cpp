#include <iostream>
#include <vector>
using namespace std;

bool matsearch(const vector<vector<int>> &mat, int m, int n, int target)
{
    int i = 0;
    int j = n - 1;

    while (i < m && j >= 0)
    {
        if (mat[i][j] == target)
            return true;
        else if (mat[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}

int main()
{
    int m = 5;
    int n = 5;

    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 20}};

    int target = 17;

    cout << matsearch(mat, m, n, target);
    return 0;
}
