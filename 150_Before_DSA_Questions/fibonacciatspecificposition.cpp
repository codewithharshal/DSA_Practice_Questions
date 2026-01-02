#include <iostream>
using namespace std;

int main()
{
    int postionOfThisFibonacciTerm = 10;
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 2; i <= postionOfThisFibonacciTerm; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c;

    return 0;
}