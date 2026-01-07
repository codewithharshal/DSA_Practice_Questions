#include <iostream>
using namespace std;

int main()
{
    int from = 1;
    int to = 10;
    int sum = 0;
    for (int i = from; i <= to; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}