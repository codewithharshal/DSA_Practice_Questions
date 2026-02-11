#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {5, 5};
    int n = v.size();

    if (n < 2)
    {
        cout << false << endl;
        return 0;
    }

    long long total = 0;
    for (int x : v)
        total += x;

    if (total % 2 != 0)
    {
        cout << false << endl;
        return 0;
    }

    long long prefix = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefix += v[i];
        if (prefix == total / 2)
        {
            cout << true << endl;
            return 0;
        }
    }

    cout << false << endl;
    return 0;
}
