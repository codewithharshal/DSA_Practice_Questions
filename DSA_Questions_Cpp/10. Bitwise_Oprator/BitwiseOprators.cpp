#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 3;

    cout << "x & y = " << (x & y) << endl;
    cout << "x | y = " << (x | y) << endl;
    cout << "x ^ y = " << (x ^ y) << endl;
    cout << "~x = " << (~x) << endl;
    cout << "x << 1 = " << (x << 1) << endl; // left
    cout << "x >> 1 = " << (x >> 1) << endl; // right

    return 0;
}
