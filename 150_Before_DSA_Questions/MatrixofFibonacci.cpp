#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int n = rows * cols; // total numbers needed

    vector<long long> fib(n);

    // generate Fibonacci sequence
    fib[0] = 0;
    if (n > 1)
        fib[1] = 1;

    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    // fill matrix
    int index = 0;
    vector<vector<long long>> mat(rows, vector<long long>(cols));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = fib[index++];

    // print matrix
    cout << "\nFibonacci Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
