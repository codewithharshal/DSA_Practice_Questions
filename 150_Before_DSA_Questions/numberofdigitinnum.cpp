#include <iostream>
using namespace std;

int main()
{
    int num = 001;
    int count = 0;

    do
    {
        count++;
        num /= 10;
    } while (num > 0);

    cout << count;
    return 0;
}
