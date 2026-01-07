#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int n = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n++ << " ";
        }
        cout << endl;
    }
}