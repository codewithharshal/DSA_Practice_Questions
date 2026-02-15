#include <iostream>
using namespace std;

int count_set_bit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = (n & (n - 1));
    }
    return count;
}

int main()
{
    int n = 7;
    // cout << __builtin_popcount(n);
    cout << count_set_bit(64);
    return 0;
}
